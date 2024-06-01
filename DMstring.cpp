#include <iostream>
#include <string>
using namespace std;

int main() {
    std::string myStr {"appleman"};

    if (myStr.size() == myStr.length()) {
        cout << "same" <<endl;
    }

    return 0;
}
