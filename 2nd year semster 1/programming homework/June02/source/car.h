#ifndef CAR_H
#define CAR_H

#include "base.h"
#include <string>
using namespace std;

class Car : public Base {
private:
    string cartype;

public:
    Car(string ft, double p, double fp, int y, int s, int d, string ct);
    void display_att() override;
    double refuel(string ft, double fp) override;
    void turn(string direction);
};

#endif // CAR_H
