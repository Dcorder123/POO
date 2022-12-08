#include <iostream>
#include <string>
#include "Pessoa.h"
#include "Ator.h"
#include "Diretor.h"

using namespace std;

int main() {
    Pessoa p1("Joao");
    p1.imprimir();
    cout << endl;
    Ator a1("Maria", "10 anos");
    a1.imprimir();
    cout << endl;
    Diretor d1("Jose", 5);
    d1.imprimir();
    
    return 0;
}