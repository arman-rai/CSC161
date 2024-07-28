#include <iostream>
#include <string>
using namespace std;

    class Distance {
        int meter;
        public:
            Distance() {
                
            }
            Distance(int m) {
                meter = m;
            } 

            void display() {
                cout << "meter : " << endl;
            }
    };

    int main() {
        Distance d;
        int meter = 6;
        d = meter;
        d.display();

        return 0;
    }