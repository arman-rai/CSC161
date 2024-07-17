// create a class time with data members second, minute and hour 
// create parameterized constructor and default constructor 
// include addTime() method which takes and address of time object 
// and adds to object and return the resultant object by pointer 
// in main create two object using parametized constructor and another object using default 
// constructor, display time of resultant object
#include <iostream>
using namespace std;
#define print(x) std::cout << x << std::endl;
class Time {
    int second, minute, hour;

    public:
    Time() :hour(0) {
        int second = 0;
        int minute = 0;
    } 

    Time(int second, int minute, int hour) {
        this-> second = second;
        this-> minute = minute;
        this-> hour = hour;
    }

    Time* addTime(Time* samaya) {
        Time* result = new Time;
        result->second = second + samaya->second;
        result->minute = minute + samaya->minute + second/60;
        result->hour = hour + samaya->hour + minute/60;
        result->second %= 60;
        result->minute %= 60;
        return result;
    }

    void display(){
        print(second);
        print(minute);
        print(hour);
    }
};

int main() {
    Time tOne(2, 3, 4), tTwo(3, 5, 69), *tThree;
    tThree = tOne.addTime(&tTwo);
    tThree->display();
    return 0;
}