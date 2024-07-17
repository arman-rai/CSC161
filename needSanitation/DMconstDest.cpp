#include <iostream>
using namespace std;

class Point {
    public:
    int x {5}, y {7} ;

    Point(int a, int b) {
        // this->x = b;
        // this->y = a;
        cout << x  << " " << y <<endl;
        cout << this->x  << " " << this->y <<endl;
    }
    
    ~Point() {
        cout << "Obj Dest" << endl;
    }
};

int main() {
    Point(2, 4);

    return 0;
}