#include <iostream>
using namespace std;
#define print(x) std::cout << x << std::endl;

int main() {
    int number;
    print("Enter number up to which the sequence lasts : ");
    std::cin >> number;

    print("Sequence : ");
    for (int i = 1; i <= number ; ++i)
    {
        print(i);
    }
    

return 0;
}