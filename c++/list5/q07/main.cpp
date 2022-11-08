#include <iostream>
#include "Complex.h"
using std::cout, std::endl;

int main(){
    Complex a(1, 2), b(3, 4), c;
    c = a + b;
    c.print();
    cout << endl;
    c = a - b;
    c.print();
    cout << endl;
    c = a * b;
    c.print();
    cout << endl;
    c = a / b;
    c.print();
    cout << endl;
    cout << (a == b) << endl;
    cout << (a != b) << endl;
    return 0;
};