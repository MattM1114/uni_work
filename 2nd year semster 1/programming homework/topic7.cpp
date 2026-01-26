#include <iostream>
using namespace std;
bool isv(char letter);

int main() {

    char letter;
    bool l;
    cout <<"please enter a single char " <<endl;
    cin>>letter;
    l =isv(letter);

    if (l == true){
        cout <<letter <<" is a vowel" <<endl;
    } 
    else
    {
        cout <<letter <<" is a not vowel" <<endl;
    }


    return 0;
}

bool isv(char letter){
    if (letter == 'a'||letter == 'e'||letter == 'i'||letter == 'o'||letter == 'u'||
        letter == 'A'||letter == 'E'||letter == 'I'||letter == 'O'||letter == 'U'){
        return true;
    }
    else
    {
        return false;
    }
}

