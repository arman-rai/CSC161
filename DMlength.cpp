#include <iostream>
using namespace std;

int main() {
    int feet, inches;
    char ch[30];
    string line;
    // cout << "Enter two ints seperated by one or more spaces" <<endl;
    // cin >> feet >> inches;
    // all non-delimited character lai linxa (ex: spaces)
    // cin is a object and get() is a method

    getline(cin, line); // cin.getline(ch, 30);
    cout << line;
    // cout << ch;
    // cout << "Feet = " << feet << endl;
    // cout <<"Inches = " << inches <<endl;

    return 0;
}
