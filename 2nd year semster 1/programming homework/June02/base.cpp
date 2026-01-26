#include "Base.h"
#include <iostream>
using namespace std;

Base::Base(string ft, double p, double fp, int y, int s, int d)
    : fueltype(ft), price(p), fuelprice(fp), year(y), speed(s), doors(d) {}

double Base::refuel(string ft, double fp) {
    cout << "Refueling with " << ft << " at price $" << fp << endl;
    return fp;
}
