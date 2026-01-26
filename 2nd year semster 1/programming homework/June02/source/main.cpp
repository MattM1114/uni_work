#include "Car.h"
#include "Plane.h"
#include <iostream>
#include <vector>
using namespace std;

int main() {
    Car* myCar = new Car("Petrol", 25000, 120, 2022, 180, 4, "SUV");
    Plane* myPlane = new Plane("Jet Fuel", 1500000, 5000, 2023, 900, 3, 2);

    vector<Base*> vehicles = { myCar, myPlane };

    cout << "=== VEHICLE DETAILS ===\n";
    for (Base* v : vehicles) {
        v->display_att();
    }

    cout << "\n=== REFUELING VEHICLES ===\n";
    myCar->refuel("Petrol", 125);
    myPlane->refuel("Jet Fuel", 5100);

    cout << "\n=== SPECIAL ACTIONS ===\n";
    myCar->turn("left");
    myPlane->takeoff();

    // Cleanup
    for (Base* v : vehicles) {
        delete v;
    }

    return 0;
}
