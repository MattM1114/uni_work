#include <iostream>
#include <cmath>

using namespace std;

int main(){

    double radius,volume,sarea;
    const double pi =3.141592;
    cout <<"please enter the radius of the sphere"<<endl;
    cin >> radius;

    volume = (4.0/3.0)* pi *(pow(radius,3));
    sarea = 4.0*pi*pow(radius,2);

    cout <<"the volume is: "<<volume <<endl <<"the surface area is: " << sarea << endl;






    return 0;


}
