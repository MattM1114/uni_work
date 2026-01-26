#ifndef SHAPE_H_INCLUDED
#define SHAPE_H_INCLUDED
// uml 
// attributes are typically privet
using namespace std;
class shape{
    //varibles, attributes

    private:
        double length;
        double width;
        double height;


    // methods , function
    public:
        double calcArea();
        double getlength();
        double getwidth();
        double getheight();
        shape(double l,double w,double h);




    

};
#endif // SHAPE_H_INCLUDED