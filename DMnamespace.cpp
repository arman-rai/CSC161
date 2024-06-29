#include <iostream>
using namespace std;
namespace book {
    void foo() {
        cout << "bar" << endl;
    };
};

int main() {
    book::foo();

return 0;
}