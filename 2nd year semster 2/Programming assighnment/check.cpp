#include <iostream>
using namespace std;
/**
 * Prints the numbers from 1 to n in ascending order using recursion.
 * @param n The number up to which the count should be printed.
 */
void countUp(int n){
    if(n == 0) return;
    countUp(n - 1);
    cout << n << endl;
}

/**
 * Prints the numbers from 1 to n in ascending order using iteration.
 * @param n The number up to which the count should be printed.
 */
void countUp_iter(int n){
    for(int i = 1; i <= n; i++){
        cout << i << endl;
    }
}
/**
 * The main function of the program.
 * It asks the user to enter a number, prints the numbers from 1 to n in ascending order using recursion, and then using iteration.
 * @return 0 to indicate successful execution.
 */
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Using Recursion: "<< endl;
    countUp(n);
    cout << "Enter a number: "<< endl;
    cin >> n;
    cout << "Using Iteration: "<< endl;
    countUp_iter(n);
    return 0;
}