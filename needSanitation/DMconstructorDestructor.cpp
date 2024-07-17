#include <iostream>
using namespace std;

class Car {

    public:
    Car () {
        cout << "Object created" << endl;
    }

    ~Car () {
        cout << "Objct destroyed" << endl;
    }
};
int main() {
    Car();
    return 0;
}