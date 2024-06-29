#include <iostream>
#include <string>
// #include "DMstringUpper.cpp"
using namespace std;
#define print(x) std::cout << x << std::endl;

int main() {
    int count {0};
    std::string myStr;
    print("Enter a string : ");
    std::getline(cin, myStr);

    for (int i = 0; i < myStr.length(); i++)
    {
        if (myStr[i]  == 'a' || myStr[i]  == 'e' || myStr[i]  == 'i' || myStr[i]  == 'o' || myStr[i]  == 'u' )
        {
            count++;
        }
    }
    
    print(count);
return 0;
}