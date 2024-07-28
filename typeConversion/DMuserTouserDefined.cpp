#include <iostream>
using namespace std;

class Dollar {
    float dollar;
    public:
    Dollar () {
        cout << "Enter dollars : " << endl;
        cin  >> dollar;
    }
    operator float () { // operator casting function
        return dollar * 130;
    }
};

class Rupee {
    float rupee;
    public:
    Rupee() {
        rupee = 0;
    }
    Rupee(Dollar& d) {
        rupee = d;
    }
    void show() {
        cout << rupee << endl;
    }
};

int main() {
    Dollar d;
    Rupee r;
    r = d;
    r.show();
    return  0;
}