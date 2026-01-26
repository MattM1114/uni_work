#include<iostream>
using namespace std;

//defining the class
class car{
private:
    string brand;
    int year;

public:
    //construtor
    car(string b,int y){
    brand = b;
    year = y;
    }

    void displayinfo(){
    cout<<"brand;"<<brand<<" Year;"<<year<<endl;
    }
};
int main(){
string b;
int y ;
cout <<"please enter the brand and year of your car?"<<endl;
cin >> b;
cin >> y;

car mycar(b,y);



mycar.displayinfo();
return 0;
}
