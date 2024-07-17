#include <iostream>
using namespace std;

class Point {
  int x {5};
  protected:
  int y {8};
  public:
  int z {93};
  friend void display(Point p);
};

void display (Point p) {
  cout <<p.x <<endl;
  cout <<p.y <<endl;
  cout <<p.z <<endl;
  
}

int main() {
  Point p;
  display (p);
  return 0;
}
// Language:C++ 
// Copy the full code and open the CppCoder APP to run it. 
// CppCoder APP download link：https://play.google.com/store/apps/details?id=com.ikou.cppcoding 