#include <iostream>
using namespace std;
#define print(x) std::cout << x << std::endl;

int main() {
    int numOne, numTwo, numThree;
    print("Enter 3 integers simultaneously given no two numbers are equal: ");
    std::cin >> numOne >> numTwo >> numThree;

    print("Answer : ")
    if (numOne > numTwo && numOne > numThree)
    {
        print(numOne);
    }
    else if (numTwo > numOne && numTwo > numThree)
    {
        print(numTwo);
    }
    else if (numThree > numOne && numThree> numTwo)
    {
        print(numThree);
    }
    else
    {
        print("The three integers are equal.")
    }
    
return 0;
}