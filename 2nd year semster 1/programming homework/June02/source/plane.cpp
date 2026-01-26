#include "Plane.h"
#include <iostream>
using namespace std;

Plane::Plane(string ft, double p, double fp, int y, int s, int d, int w)
    : Base(ft, p, fp, y, s, d), wings(w) {}

void Plane::display_att() {
    cout << "Plane Details:\n";
    cout << "Fuel: " << fueltype
         << "\nPrice: " << price
         << "\nYear: " << year
         << "\nSpeed: " << speed << " km/h"
         << "\nDoors: " << doors
         << "\nWings: " << wings << "\n\n";
}

double Plane::refuel(string ft, double fp) {
    cout << "Plane-specific refuel.\n";
    return Base::refuel(ft, fp);
}

void Plane::takeoff() {
    cout << "Plane is taking off!\n";
}


