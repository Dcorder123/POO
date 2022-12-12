#include <iostream>
using std::cout, std::endl, std::cerr;

#include <string>
using std::string;

#include "Pilha.h"


int main() {
    //Pilha de inteiros
    Pilha<int> pi;
    int popEli;
    try{
        pi.pop(popEli);
    }
    catch (out_of_range &e){
        cerr << "algo aconteceu!! " << e.what() << endl;
    }
    cout << "Pilha de inteiros" << endl;
    try{
        pi.push(1);
        pi.push(11);
        pi.push(111);
        pi.push(1111);
        pi.push(11111);
        pi.push(111111);
        pi.push(1111111);
        pi.push(11111111);
        pi.push(111111111);
        pi.push(1111111111);
        pi.push(22);
    }

    catch (out_of_range &e){
        cerr << "algo aconteceu!! " << e.what() << endl;
    }

    while (!pi.isEmpty()){
        pi.pop(popEli);
        cout << popEli << endl;
    }

    //Pilha de doubles
    Pilha<double> pd;
    double popEld;
    try{
        pd.push(100.5);
        pd.pop(popEld);
    }
    catch (out_of_range &e){
        cerr << "algo aconteceu!! " << e.what() << endl;
    }

    try{
        pd.push(11.0);
        pd.push(10.0);
        pd.push(10.0);
        pd.push(10.0);
        pd.push(10.0);
        pd.push(10.0);
    }
    catch (out_of_range &e){
        cerr << "algo aconteceu!! " << e.what() << endl;
    }

    return 0;
}
