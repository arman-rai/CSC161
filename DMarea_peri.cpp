#include <iostream>
using namespace std;
#define print(x) std::cout << x << std::endl;

int main() {
    int length, breadth, area, peri;
    print("Enter length and breadth : ");
    std::cin >> length >> breadth;

    area = length * breadth;
    peri = 2 * (length + breadth);

    print(area);
    print(peri);
    return 0;
}