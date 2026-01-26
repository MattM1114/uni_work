#include <iostream>
#include <string>
using namespace std;
int main(){
   cout<<"------Eskom Billing System------"<<endl;
   //Electricity Rates
    double first_peak_hours = 0.75; //The peak hours for the first 200 units
    double second_peak_hours = 1.00; //The peak hours for above 200 units
    double first_off_peak_hours = 0.50; //The off peak hours for the first 200 units
    double second_off_peak_hours = 0.65; //The off peak hours for above 200 units

    //Additional Charges and Discounts
    double service_charge = 15.00;
    double late_payment = 0.05;
    double senior_discount = 0.10;
    double minimum_rate = 25.00;
    double bill1;

    //Minimum Bill
    cout<<"Your minimum electricity bill is: R"<<minimum_rate<<endl;
    cout<<"Your fixed service charge is: R"<<service_charge<<endl;

    //Gather user input for peak hours
    int hours;
    cout<<"Press 1 if you used electricity between 6am-10pm/Press 2 if you used electricity between 10pm-6am"<<endl;
    cin>>hours;

    //Gather user input for the units
    int units;
    cout<<"How many units have you used?"<<endl;
    cin>>units;

    // Peak Conditional Statement
    if(hours == 1){
        if(units <= 200){ //Checks if the units entered by the user are below 200
            bill1 = service_charge + minimum_rate + (first_peak_hours*units);
            cout<<"Your bill for this month is: R"<<bill1<<endl; //Prints out bill
        }else{
           bill1 = service_charge + minimum_rate + (second_peak_hours*units);
           cout<<"Your bill for this month is: R"<<bill1<<endl; //Prints out bill
        }
    }else if(hours == 2){
        if(units <= 200){ //Checks if the units entered by the user are below 200
            bill1 = service_charge + minimum_rate + (first_off_peak_hours*units);
            cout<<"Your bill for this month is: R"<<bill1<<endl; //Prints out bill
        }else{
           bill1 = service_charge + minimum_rate + (second_off_peak_hours*units);
           cout<<"Your bill for this month is: R"<<bill1<<endl; //Prints out bill
        }
    }

    //Senior citizen input
    string senior;
    cout<<"Are you a senior citizen? (Yes/No)"<<endl;
    cin>>senior;

    //Conditional Statement
    if(senior == "Yes"||senior == "yes"){
        double senior_discounted_price = bill1 * senior_discount;
        double senior_bill = bill1 - senior_discounted_price;
        if(senior_bill<25){
            senior_bill = 25;
        }
        cout<<"Your senior discounted bill for the month is: R"<<senior_bill<<endl;
    }else{
        cout<<"You do not recieve a senior citizen discount"<<endl;
    }

    //Late Payment
    string is_late;
    cout<<"Was your last payment more than 30 days ago? (Yes/No)"<<endl;
    cin>> is_late;

    //Conditional Statement
    if(is_late == "Yes" || is_late == "yes"){
        double is_late_payment = bill1 * 1.05; //Calculating 5% extra to the total payment
        cout<<"You have been charged a penalty of 5%. Your bill for this month is: R"<<is_late_payment<<endl;
    }
return 0;
}
