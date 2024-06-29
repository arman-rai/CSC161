#include <iostream>
#include <string>
#include <cctype> // for std::toupper
using namespace std;
#define print(x) std::cout << x << std::endl;


int main() {
    std::string myStr;
    print("Enter a string : ");
    // std::getline(cin, myStr);
    std::cin >> myStr;

    for (int i = 0; i < myStr.length(); i++)
    {
        // only for ascii lowercase
        myStr[i] = myStr[i] - 32;
        print(myStr[i]);
    }
    
    // print(std::toupper(myStr));
return 0;
}