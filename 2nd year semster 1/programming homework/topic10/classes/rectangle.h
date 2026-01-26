#ifndef RECTANGLE_H_INCLDED
#define RECTANGLE_H_INCLDED

#include<iostream>
#include "shape.h"

using namespace std;

class rectangle: public shape{
private:
    double length,width;
public:
    rectangle(double l,double w);
    void displayArea() override;
};

#endif // RECTANGLE_H_INCLDED
