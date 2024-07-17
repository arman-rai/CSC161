#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define print(x) std::cout << x << std::endl;

int swapNumbersReferenced(int& numberOne, int& numberTwo) {
    swap(numberOne, numberTwo);
    return numberOne, numberTwo;
}

void swapNumberPointed(int* pointOne, int* pointTwo ) {
    swap(pointOne, pointTwo); // using formal param as actual param
    // return (*numberOne, *numberTwo);
}

int main() {
    int numberOne, numberTwo;
    print("Enter two numbers : ");
    std::cin >> numberOne >> numberTwo;

    // int* pointOne = &numberOne;
    // int* pointTwo = &numberTwo;

    // polymorphism
    // early binding(compile time, static binding) and late binding(run time binding, execution time binding)
    swapNumbersReferenced(numberOne, numberTwo);
    print(numberOne);
    print(numberTwo);

    swapNumberPointed(&numberOne, &numberTwo); // address is passed not 
    print(numberOne);
    print(numberTwo);
return 0;
}