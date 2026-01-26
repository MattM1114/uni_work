#ifndef PLANE_H
#define PLANE_H

#include "base.h"
#include <string>
using namespace std;

class Plane : public Base {
private:
    int wings;

public:
    Plane(string ft, double p, double fp, int y, int s, int d, int w);
    void display_att() override;
    double refuel(string ft, double fp) override;
    void takeoff();
};

#endif // PLANE_H

