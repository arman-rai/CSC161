#include <iostream>
#include <string> // string is a class which is an indexed array 
using namespace std;

int main(){
    int length, breadth;
    int area, peri;
    const int pi = 3.141592654;

    cout <<"Enter length and breadth: " <<endl;
    cin >> length >> breadth ;

    peri = 2*(length + breadth);
    area = length * breadth;

    cout << "Area = " <<area <<endl << "Perimeter = " <<peri <<endl;


    return 0;
}