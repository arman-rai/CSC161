#include <iostream>

using namespace std;

class Point{
    int x, y;
    public:
    void display() {
        cout << x << endl;
        cout << y << endl;
        x++;
        y++;
   }
};

void printt() {
   static Point p;
    
    p.display();
    
   
}

int main() {
    for(int i=0;i<3;i++)
    printt();
    return 0;
}