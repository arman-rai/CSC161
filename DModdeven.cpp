#include <iostream>
using namespace std;
#define print(x) std::cout << x << std::endl;

int main() {
    int number;
    print("Enter number : ");
    std::cin >> number;

    if (number % 2 == 0)
    {
        print("even")
    }
    else
    {
        print("odd");
    }
    
return 0;
}