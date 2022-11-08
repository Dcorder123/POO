/*  Feito por Daniel Barbosa Vasconcelos
    Data:08/11/2022
    Classe de Númeoros Complexos
*/
#include <iostream>
#include "Complex.h"
using std::cout, std::endl;



Complex::Complex(double real, double imaginary): real(real), imaginary(imaginary){

}


Complex Complex::operator+(const Complex &right) const{
    return Complex(real + right.real, imaginary + right.imaginary);
}

Complex Complex::operator-(const Complex &right) const{
    return Complex(real - right.real, imaginary - right.imaginary);
}

Complex Complex::operator*(const Complex &right) const{
    return Complex(real * right.real - imaginary * right.imaginary, real * right.imaginary + imaginary * right.real);
}

Complex Complex::operator/(const Complex &right) const{
    return Complex((real * right.real + imaginary * right.imaginary) / (right.real * right.real + right.imaginary * right.imaginary), (imaginary * right.real - real * right.imaginary) / (right.real * right.real + right.imaginary * right.imaginary));
}

bool Complex::operator==(const Complex &right) const{
    return real == right.real && imaginary == right.imaginary;
}

bool Complex::operator!=(const Complex &right) const{
    return real != right.real || imaginary != right.imaginary;
}

void Complex::print() const{
    cout << "(" << real << ", " << imaginary << ")";
}

