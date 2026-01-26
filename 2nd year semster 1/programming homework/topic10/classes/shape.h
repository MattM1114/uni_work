#ifndef SHAPE_H_INCLUDED
#define SHAPE_H_INCLUDED

// Abstract base class representing a generic shape
class shape {
protected:
    // Add common attributes here if needed, or leave abstract
    // double length, width, height;

public:
    virtual void displayArea() = 0; // Pure virtual function
    virtual ~shape() {}             // Virtual destructor
};

#endif // SHAPE_H_INCLUDED
