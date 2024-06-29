#include <iostream>
#include <string>
using namespace std;
#define print(x) std::cout << x << std::endl;

int main() {
    std::string myStr = {"Appleman"};

    for (int i = 0; i < myStr.length(); i++)
    {
        print(myStr[i]);
    }
    
return 0;
}