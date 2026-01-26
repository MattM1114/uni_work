#ifndef CIRCLE_H_INCLUDED
#define CIRCLE_H_INCLUDED

#include<iostream>
#include "shape.h"

using namespace std;

class circle: public shape{
private:
    double radius;
public:
    circle(double r);
    void displayArea() override;
};
#endif
