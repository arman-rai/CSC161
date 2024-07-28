#include <iostream>
using namespace std;

class Distance {
    int meter;
    public:
    Distance (int m) {
        meter = m;
    }

    Distance() {
        
    }

    void display() {
        cout << "meter : " << m << endl;
        
    }
};