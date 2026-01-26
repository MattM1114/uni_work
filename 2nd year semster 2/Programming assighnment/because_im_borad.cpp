#include <iostream>
using namespace std;

class TemperatureConverter
{
private:
double celsius;
public:
TemperatureConverter(double cel) {
    celsius = cel;
}
~TemperatureConverter() {
    cout << "Destructor called" << endl;
}
double toFahrenheit() {
    double feh = (celsius * 9.0/5.0) + 32;
    return feh;
}
double toKelvin() {
    double kel = celsius + 273.15;
    return kel;
}
void display() {
    cout << "The temperature in Fahrenheit is: " <<toFahrenheit() <<"°F"<< endl;
    cout << "The temperature in Kelvin is: " << toKelvin()<<"K"<<endl;
    cout << "The temperature in Celsius is: " << celsius <<"°c"<<endl;
}
};

int main() {
    double temp;
    cout << "Enter the temperature in Celsius: ";
    cin >> temp;
    cout << endl;
    TemperatureConverter converter(temp);
    converter.display();

    return 0;
}