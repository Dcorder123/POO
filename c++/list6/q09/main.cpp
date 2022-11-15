#include <iostream>
#include <string>
#include "PessoaFisica.h"
#include "Funcionario.h"
using namespace std;

int main()
{
    Funcionario f1("Joao", "123.456.789-00", "1234", 1000, 40, 160);
    cout << f1;
    cout << "-----------------------------------------------------------------------"<< endl;
    Funcionario f2("Maria", "987.654.321-00", "4321", 1212.80, 40, 160);
    cout << f2;

    return 0;
}