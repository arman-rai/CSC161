#include <iostream>
using namespace std;

class Point {
    int x; // only by the class others can't use it 
    protected:
    int y; // only the child and the class can use it 
    public:
    int z; // child and other class can access the element
    Point() {
        cout << x <<
    }
}