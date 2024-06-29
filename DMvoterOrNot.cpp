#include <iostream>
using namespace std;
#define print(x) std::cout << x << std::endl;

int main() {
    int age;
    print("Enter your age : ");
    std::cin >> age;

    if (age >= 18)
    {
        print("You can vote.");
    }
    else
    {
        print("You can't vote yet.");
    }
    
return 0;
}