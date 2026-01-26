#include <iostream>
#include "rectangle.h"

rectangle::rectangle(double l,double w){
    length =l;
    width =w;
}
void rectangle::displayArea(){
    cout<<"Rectangle Area: "<<(length*width)<<endl;
}
