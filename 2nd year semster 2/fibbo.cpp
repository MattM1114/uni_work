#include <iostream>
using namespace std;

// Fibonacci function
int fibb(int num) {
    if (num == 0) {
        return 0;   // Fibonacci(0) = 0
    } else if (num == 1) {
        return 1;   // Fibonacci(1) = 1
    } else {
        return fibb(num - 1) + fibb(num - 2);
    }
}

// Iterative sum function
int sumitt(int num) {
    int sum = 0;
    for (int i = 0; i <= num; i++) {
        sum += i;
    }
    return sum;
}

// Recursive sum function
int sumrec(int num) {
    if (num == 0) {
        return 0;
    }
    return sumrec(num - 1) + num;
}

int main() {
    cout << "Fibonacci(8): " << fibb(8) << endl;
    cout << "Sum (iterative, up to 21): " << sumitt(21) << endl;
    cout << "Sum (recursive, up to 21): " << sumrec(21) << endl;
}
