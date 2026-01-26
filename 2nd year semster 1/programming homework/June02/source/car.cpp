#include "Car.h"
#include <iostream>
using namespace std;

Car::Car(string ft, double p, double fp, int y, int s, int d, string ct)
    : Base(ft, p, fp, y, s, d), cartype(ct) {}

void Car::display_att() {
    cout << "Car Details:\n";
    cout << "Type: " << cartype << "\nFuel: " << fueltype
         << "\nPrice: " << price << "\nYear: " << year
         << "\nSpeed: " << speed << " km/h\nDoors: " << doors << "\n\n";
}

double Car::refuel(string ft, double fp) {
    cout << "Car-specific refuel.\n";
    return Base::refuel(ft, fp);
}

void Car::turn(string direction) {
    cout << "Car is turning " << direction << ".\n";
}
