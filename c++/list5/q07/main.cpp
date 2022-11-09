#include <iostream>
#include "Complex.h"
using std::cout, std::endl;

int main(){
    Complex x(4.3, 8.2), y(1.1, 7.8), z;
    cout << "x: ";
    x.print();
    cout << "" << endl;
    cout << "y: ";
    y.print();
    cout << "" << endl;
    z = x + y;
    cout << "z = x + y: ";
    z.print();
    cout << "" << endl;
    z = x - y;
    cout << "z = x - y: ";
    z.print();
    cout << "" << endl;
    z += x;
    cout << "z += x: ";
    z.print();
    cout << "" << endl;
    z -= y;
    cout << "z -= y: ";
    z.print();
    cout << endl;
    cout << "++z: ";
    ++z;
    z.print();
    cout << endl;
    cout << "--z: ";
    --z;
    z.print();
    cout << endl;
    return 0;
};