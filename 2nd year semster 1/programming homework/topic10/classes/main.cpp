#include <iostream>
#include "shape.h"
#include "rectangle.h"
#include "circle.h"

using namespace std;

int main()
{
    rectangle myrec(12,123);
    circle mycir(3.1);

    myrec.displayArea();
    mycir.displayArea();

 return 0;
}

