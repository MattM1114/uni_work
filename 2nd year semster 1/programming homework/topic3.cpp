#include <iostream>
using namespace std;

int main(){
    int num=0 ,sum = 0;
    while(num != -1){
        sum += num;
        cout << "enter a number (-1 to stop):";
        cin>>num;
    }
    cout << "sum:"<< sum;
    return 0;
 }
