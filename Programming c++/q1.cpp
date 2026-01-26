#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int randomInt() { return rand() % 101 - 50; }
typedef double (*TransformFunc)(double);
double squareRoot(double x) { return x > 0 ? sqrt(x) : x; }
double logarithm(double x) { return x > 0 ? log(x) : x; }
double inverse(double x) { return x != 0 ? 1.0 / x : x; }

void applyTransformation(double* arr, int size, TransformFunc func) {
    for (int i = 0; i < size; i++) *(arr + i) = func(*(arr + i));
}

double recursiveSum(double* ptr, int size) {
    return size ? *ptr + recursiveSum(ptr + 1, size - 1) : 0;
}

void swapArrays(double** a, double** b) {
    double* temp = *a; *a = *b; *b = temp;
}

int main() {
    srand(time(0));
    int n;
    cout << "Enter number of x values (from -10 to n): ";
    cin >> n;
    int size = n + 11;
    double* expressions = new double[size], *ptr = expressions;
    double x = -10;

    for (int i = 0; i < size; i++, x++) {
        int A = randomInt(), B = randomInt(), C = randomInt(), D = randomInt();
        *(ptr + i) = A * x * x + B * sin(C * x) + D;
    }

    double sum = 0, sumSq = 0, sumPos = 0, sumNeg = 0;
    for (int i = 0; i < size; i++) {
        double val = *(ptr + i);
        sum += val; sumSq += val * val;
        val > 0 ? sumPos += val : sumNeg += val;
    }

    double mean = sum / size;
    double stddev = sqrt(sumSq / size - mean * mean);

    cout << "\nMean: " << mean << "\nStd Dev: " << stddev
         << "\nSum Positive: " << sumPos << "\nSum Negative: " << sumNeg << endl;

    applyTransformation(ptr, size, inverse);
    cout << "\nRecursive Sum after transformation: " << recursiveSum(ptr, size) << endl;

    double* newArray = new double[size];
    for (int i = 0; i < size; i++) *(newArray + i) = i;
    swapArrays(&expressions, &newArray);

    cout << "\nAfter swap, first 5 values:\n";
    for (int i = 0; i < 5; i++) cout << *(expressions + i) << " ";
    cout << endl;

    delete[] expressions;
    delete[] newArray;
    return 0;
}
