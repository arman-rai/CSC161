// wap to add two objects of TIme using 
// friend function pass the objects by reference and return the 
// object by reference

#include <iostream>
using namespace std;

class Time {
    int second, minute, hour;
    public:

    Time() {
        int second = 0;
        int minute = 0;
        int hour = 0;
    }

    Time(int second, int minute, int hour) {
        this->second = second;
        this->minute = minute;
        this->hour = hour;
    }

    friend Time& addTime(Time& tOne, Time& tTwo) {
        Time* result = new Time;
        result->second = tOne.second + tTwo.second;
        result->minute = tOne.minute + tTwo.minute + (result->second /60);
        result->hour = tOne.hour + tTwo.hour + (result->minute /60);
        result->second %= 60;
        result->minute %= 60;

        return *result;
    }

};

int main() {
    Time tOne(2 ,4 , 5), tTwo(34, 5, 2), tThree;
    tThree = tThree.addTime(tOne, tTwo);
    return 0;
}
