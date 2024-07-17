// wap to create a class student with data members name roll.
//  create def and parameterized constructor in default constructor input data members 
// also include show() method to displat data members

#include <iostream>
#include <string>
using namespace std;

class Student {
    public:
    int roll;
    std::string name {""};
    Student(){
        cout<<"Enter name and roll"<<endl;
        cin>>name>>roll;
    }

    Student(int roll, string name ) {
        this->roll=roll;
        this->name=name;
    }
    void show(void) {
            cout << roll << name << endl;
    }
};

int main() {
    
   

    Student s1(21, "reejan");
    s1.show();
    return 0;
}