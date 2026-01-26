#include <iostream>
#include <cmath>
using namespace std;

int increasefine(int day){
    // 10^(2^(day-1))
    
    unsigned long long  fine = pow(10,pow(2,day-1));

    return fine;
}


int main() {
    cout << "Enter the number of days overdue: ";
int day;

    cin >> day;
    int fine =  increasefine(day);
    cout << "The fine for being late is: "<<fine <<endl;
    return 0;


}
