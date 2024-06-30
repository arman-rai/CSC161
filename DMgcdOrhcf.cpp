#include <iostream>
using namespace std;

int main() {
    int numberOne, numberTwo, temp, remainder;
    std::cout << "Enter two integers which are not equal : " << std::endl;
    std::cin >> numberOne >> numberTwo;

    if(numberOne > numberTwo) {
        temp = numberOne;
        numberOne = numberTwo;
        numberTwo = temp;
    }

    while (numberOne > 0 || true)
    {
        remainder = numberTwo % numberOne;
        if (remainder == 0)
        {
            break;
        }
        else
        {
            numberTwo = numberOne;
            numberOne = remainder;
        }        
    }
    
    std::cout << "HCF = " << numberOne << std::endl; 

return 0;
}