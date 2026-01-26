#include <iostream>
#include "circle.h"
#include <cmath> // required for M_PI



circle::circle(double r){
    radius =r;
}
void circle::displayArea() {
    double area = M_PI * radius * radius;
    cout << "Circle area: " << area << endl;
}
