#include <iostream>
#include <iomanip>  // for std::fixed and std::setprecision
using namespace std;

int main() {
    long long num, num2;
    char a;
    double num3, num4;

    cin >> num >> num2;
    cin >> ws >> a;
    cin >> num3 >> num4;

    cout << num << endl;
    cout << num2 << endl;
    cout << a << endl;
    cout << fixed << num3 << endl;  // fixed-point format
    cout << fixed << num4 << endl;

    return 0;
}
