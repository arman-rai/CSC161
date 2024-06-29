#include <iostream>
using namespace std;
#define print(x) std::cout << x << std::endl;
int main() {

    int x = 10;
    int& y = x;
    y += 20;
    print(y);
    return 0;
}