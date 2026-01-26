#include <iostream>
#include <cstring> // for strlen()
using namespace std;

// Function to check if a character is a vowel
bool isVowel(char ch);

int main() {
    // Let user input the string
    char input[200]; // Enough space for a long sentence
    cout << "Enter a string: ";
    cin.getline(input, 200); // Reads entire line including spaces

    // Array to store found vowels
    char foundVowels[200];
    int count = 0;

    // Loop through the input string
    for (int i = 0; i < strlen(input); ++i) {
        if (isVowel(input[i])) {
            foundVowels[count++] = input[i];
        }
    }

    // Output the vowels
    cout << "Vowels found: ";
    for (int i = 0; i < count; ++i) {
        cout << foundVowels[i] << " ";
    }
    cout << endl;

    return 0;
}

bool isVowel(char ch) {
    char vowels[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    for (int i = 0; i < 10; ++i) {
        if (ch == vowels[i]) {
            return true;
        }
    }
    return false;
}
