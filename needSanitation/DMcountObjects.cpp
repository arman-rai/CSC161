

#include <iostream>
#include <random>
class Point {
  static int count;
  public:
  Point() {
    count ++;
  }
  static void show() {
    std::cout << count << std::endl;
  }
};

int Point::count {0};
int main() {
  Point p1;
  Point p2;
  Point p3;
  return 0;
}
// Language:C++ 
// Copy the full code and open the CppCoder APP to run it. 
// CppCoder APP download link：https://play.google.com/store/apps/details?id=com.ikou.cppcoding 