#include <iostream>
using namespace std;

class length {
    int inch, feet; // private cannot be accessed by calling in the main()

    public:
    length() {
        inch = 0;
        feet = 0;
    }
    
    length(int inch, int feet) {
        this-> inch = inch;
        this-> feet = feet;
    }
    
    length addLength(length &l ) { // referencing the class ltwo as l
        length result; // length *res = new length; // dynamic object for the class using a *res ptr
        result.inch = inch + l.feet; // 1st obj ko inch + copied 2nd obj ko inch // res->inch = inch + l.feet;
        result.feet = feet + l.feet + (result.inch / 12);
        result.inch = result.inch % 12; // remaining inches 
        return result;
    }
    
    void display() {
        cout << "feet : " << feet << endl;
        cout << "inch : " << inch << endl;

    }
};

int main() {
    length lOne(11, 11), lTwo(4, 6);
    length lThree = lOne.addLength(lTwo);
    lThree.display();
    return 0;
}