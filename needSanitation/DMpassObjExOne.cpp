// my mum has Rs 5.6 and dad has Rs 15.70
// create a class Rupee to store these info 
// and add money of mum + dad and diplay total money

#include <iostream>
using namespace std;

class Rupees {
    int rupee, paisa;

    public:
    Rupees() {
        rupee = 0;
        paisa = 0;
    }

    Rupees(int rupee, int paisa) {
        this-> rupee = rupee;
        this-> paisa = paisa; 
    }

    Rupees addMoney(Rupees Parent) {
        Rupees totalMoney;
        totalMoney.rupee = rupee + Parent.rupee ;
        totalMoney.paisa = paisa + Parent.paisa + (Parent.rupee / 100);
        totalMoney.paisa %= 100;
        return totalMoney;
    }

    void display() {
        cout << "Rupee : " << rupee << endl;
        cout << "Paisa : " << paisa << endl;
    }

};

int main() {
    Rupees Mom(20, 123), Dad(20, 22);
    Rupees Total = Mom.addMoney(Dad);
    Total.display();
    return 0; 
}