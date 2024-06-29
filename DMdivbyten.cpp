#include <iostream>
using namespace std;
#define print(x) std::cout << x << std::endl;

int main() {

    int number;
    print("Enter a number : ");
    std::cin >> number;

    if (number % 10 == 0)
    {
        print("It is divisible by 10.")
    }
    
return 0;
}