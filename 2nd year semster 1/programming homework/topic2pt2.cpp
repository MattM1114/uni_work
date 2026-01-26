#include <iostream>
using namespace std;

int main(){
    cout << "please enter your grades";
    int m1,m2,m3,m4,m5;
    cin >> m1;
    cin >> m2;
    cin >> m3;
    cin >> m4;
    cin >> m5;

    if (m1>=80 && m2>=80 && m3>=80 && m4>=80 && m5>=80){
        cout << "Outstanding! All A's!"<<endl;
    }
    else if (m1 >=80|| m2 >=80 || m3>=80 || m4>=80|| m5>=80){
        cout << "Good job! You got at least one   A!"<<endl;
    }
    else if (m1>=70 || m2>=70 || m3>=70 || m4>=70 || m5>=70){
        cout << "You got at least one B!"<<endl;
    }
    else if (m1>=60 || m2>=60 || m3>=60 || m4>=60 || m5>=60){
        cout << "You got at least one C!"<<endl;
    }
    else if (m1>=50 || m2>=50 || m3>=50 || m4>=50 || m5>=50){
        cout << "You need to study more!"<<endl;
    }
    else {
        cout << "You failed!"<<endl;
    }
return 0;


}
