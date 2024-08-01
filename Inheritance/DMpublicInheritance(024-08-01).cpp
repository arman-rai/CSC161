#include <iostream>
#define print(x) std::cout << x << std::endl;
using namespace std;

class Living {
    bool canBreathe = true;
    protected:
    bool canEat = true;
    public:
    bool immortal = false;

    void show() {
        cout << canBreathe << endl;
        cout << canEat << endl;
        cout << immortal << endl;
    }
};

class Dog : public Living {
    bool canBark = true;

    public:

    void display() {
        cout << canBark << endl;
        // cout << canBreathe << endl;
        cout << canEat << endl;
        cout << immortal << endl;
    }
};

int main() {
    Dog d;
    // cout << d.canBark << endl;
    print(d.immortal)
    d.show();
    print(std::boolalpha)
    d.display();
    Living l;
    // print(l.canBark) 
    return 0;
}