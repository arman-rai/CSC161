#include <iostream>
using namespace std;

int main() {
    int vctOne[4] {1, 5, 7, 3}, vctTwo[4] {2, 6, 3, 7};
    int vctProd = 0, vctDotProd;
    int sz = sizeof(vctOne) / sizeof(int);

    // int length = vctOne.length();
    for (int i = 0; i < sz ; i++)
    {
        vctProd += vctOne[i] * vctTwo[i];
        // vctDotProd += vctDotProd[i];
    }
    std::cout << vctProd <<std::endl;
    
return 0;
}