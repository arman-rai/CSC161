#include <iostream>
using namespace std;

int main() {
    int number, remainder, reverse;
    std::cout << "Enter a number : " << std::endl;
    std::cin >> number;

  while (number != 0)
  {
    remainder = number % 10;
    reverse = reverse * 10 + remainder;
    number /= 10;
  }
  
    std::cout << reverse << std::endl;

}