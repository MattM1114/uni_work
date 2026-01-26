#include <iostream>


using namespace std;

int main(){
// we are calculating the least that the user can pay
    double least,markup=500,dcost,listed;
    cout <<"please enter ther listed price"<<endl;
    cin >> listed;


    dcost = listed * 0.85;
    least = dcost+markup;
    cout << "The least amount the dealer would accept for the car is: "<<least << " the dealer cost was "<<dcost<<endl;


    return 0;


}
