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
    Complex temp;
    temp.real = real + right.real;
    temp.imaginary = imaginary + right.imaginary;
    return temp;
    //return Complex(real + right.real, imaginary + right.imaginary);
}

Complex Complex::operator-(const Complex &right) const{
    Complex result;
    result.real = real - right.real;
    result.imaginary = imaginary - right.imaginary;
    return result;
    //return Complex(real - right.real, imaginary - right.imaginary);
}

Complex Complex::operator+=(const Complex &right){
    real += right.real;
    imaginary += right.imaginary;
    return *this;
}

Complex Complex::operator-=(const Complex &right){
    real -= right.real;
    imaginary -= right.imaginary;
    return *this;
}

Complex Complex::operator++(){
    real = real + 1;
    imaginary = imaginary + 1;
    return *this;
}

Complex Complex::operator--(){
    real = real - 1;
    imaginary = imaginary - 1;
    return *this;
}

void Complex::print() const{
    cout << "(" << real << ", " << imaginary << ")";
    
}

