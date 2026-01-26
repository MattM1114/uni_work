#include <iostream>
#include "shape.h"

shape::shape(double l, double w, double h)
{
    length = l;
    width = w;
    height = h;
}

double shape::calcArea()
{
    return 0.0;
}
double shape::getwidth()
{
    return width;
}

double shape::getheight()
{
    return height;
}

double shape::getlength()
{
    return length;
};