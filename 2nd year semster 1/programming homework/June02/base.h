#ifndef BASE_H
#define BASE_H

#include <string>
using namespace std;

class Base {
protected:
    string fueltype;
    double price, fuelprice;
    int year, speed, doors;

public:
    // Constructor
    Base(string ft, double p, double fp, int y, int s, int d);

    // Virtual functions
    virtual void display_att() = 0;
    virtual double refuel(string fueltype, double fuelprice);

    // Virtual destructor
    virtual ~Base() {}
};

#endif // BASE_H

