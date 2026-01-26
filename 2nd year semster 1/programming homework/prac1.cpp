#include <iostream>
#include <string>
using namespace std;

int main(){
    double peak1 =0.75;
    double peak2 = 1.00;
    double off1= 0.50;
    double off2=0.65;
    double senior;
    double bill;
    double maintence = 15;
    double discount;
    double fine = 2;
    double fbill;
    int units,user,mim = 25;

    string late;
    cout << "if you used electricity during peak hours please press 1 else press 2 : " << endl;
    cin >> user;
    cout << "please enter the amount of units you used : " << endl;
    cin >> units;
    // we are going to start the with the 1st condtioanl
    if (user == 1) {
        if (units <= 200) {
            bill = mim + maintence + (peak1 * units);
        }
        else {
            bill = mim + maintence + (peak2 * units);
        }
    }
    else if (user == 2){
        if (units <= 200) {
            bill = mim + maintence + (off1 * units);
        }
        else {
            bill = mim + maintence + (off2 * units);
        }
    }
    //if they are a senior they get a 10% discount
    cout << "if you are a senior please enter 1 for a 10% discount else enter  2:" << endl;
    cin >> senior;
    if (senior == 1) {
        discount = bill * 0.10;
        bill = bill - discount;
        if (bill < mim) {
            bill = 25;

        }
    }




    //late payments have to pay a 5% penlaty
    cout << "was your last payment 30 days ago (Yes/No) :"<<endl;
    cin >> late;
    if (late == "Yes"|| late =="yes"){
        fine = bill * 0.05;
        fbill = bill + fine;
        cout<<"the final amount is : R"<<fbill<<endl;
    }
    else{
        cout<<"the final amount is : R"<<bill<<endl;
    }










return 0;
}
