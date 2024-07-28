#include <iostream>
using namespace std;

class Feet {
    double f;
    public:
    Feet() {
        cout << "Enter length in feet : " << endl;
        cin >> f; 
    }
    Feet(double f) {
    }
    operator double() {
        return f* 12;
    }
};

class Inch {
    double i;
    public:
    Inch() {
        i = 0;
    }
    Inch(double i) {
           
    }
};