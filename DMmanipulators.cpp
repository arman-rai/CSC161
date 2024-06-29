#include <iostream>
#include "iomanip"

// defines format for output
// exampeles of manipulators are : endl, left, roght, setw(), setprecision()
int main() {
    using namespace std;

    cout << right << setw(20) << "Name : " << "Appleman" << endl;
    cout << setprecision(1) << 1.13 << endl;
    cout << setprecision(2) << 1.14 << endl;
return 0;
}