#include <iostream>
using namespace std;

class Point {
  static int x;
  protected:
  static int y ;
  public:
  static int z ;
  static void display(Point p);
};
int Point::x = 38;

int main(){
  
  Point p;
  return 0;
}
// Language:C++ 
// Copy the full code and open the CppCoder APP to run it. 
// CppCoder APP download link：https://play.google.com/store/apps/details?id=com.ikou.cppcoding 