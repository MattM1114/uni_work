#include <iostream>
using namespace std;

double calculate_total(double withdrawals, double I_balance,string overdraft_f);
int main()
{
    // we are going to get the number of withdrawals from the user to
    double I_balance, withdrawals;
    string name, overdraft_f;
    cout << "Please enter your name and initial balance: "<<endl;
    cin >> name >> I_balance;
    cout << "do you have overdraft facilities ?" <<endl;
    cin >> overdraft_f;
    cout << "Please enter the number of withdrawals: "<<endl;
    cin >> withdrawals;
    cout <<endl;
    double balance = calculate_total(withdrawals, I_balance, overdraft_f);
    cout << "Your name is: " << name << endl;
    cout << "Your initial balance is: " << I_balance << endl;
    cout << "Your number of withdrawals is: " << withdrawals << endl;
    cout << "Your  new balance is: " << balance << endl;


    return 0;
}

double calculate_total(double withdrawals,double I_balance,string overdraft_f){
    double total_c;
    if (withdrawals > 5){
        total_c = 5+(withdrawals * 22.50);
    }
    else{
        total_c = 5;
    }
    double b = I_balance - total_c;
    
    if (b < 0){
        cout << "there are no funds in your account" << endl;
        if (overdraft_f == "Yes" || overdraft_f == "yes"){
            cout << "An overdraft fee of 375 will be applied to your account!\n" << endl;
            b = b - 375;
        }
    }
    return b;
}