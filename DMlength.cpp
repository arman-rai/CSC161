#include <iostream>
using namespace std;

int main() {
    int feet, inches;
    char ch;
    string line;
    // cout << "Enter two ints seperated by one or more spaces" <<endl;
    // cin >> feet >> inches;
    // all non-delimited character lai linxa (ex: spaces)
    // cin is a object and get() is a method

    getline(cin, line);
    cout << line;
    // cout << ch;
    // cout << "Feet = " << feet << endl;
    // cout <<"Inches = " << inches <<endl;

    return 0;
}
