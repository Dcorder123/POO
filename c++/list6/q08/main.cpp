#include "Pessoa.h"
#include <iostream>
using namespace std;
#include "PessoaFisica.h"
#include "PessoaJuridica.h"

int main()
{
    Pessoa p1("Joao");
    Pessoa p2("Maria");
    Pessoa p3("Jose");
    
    
    cout << p1 << p2 << p3 << endl;

    PessoaFisica pf1("Joao", "123.456.789-00");
    PessoaFisica pf2("Maria", "987.654.321-00");
    PessoaFisica pf3("Jose", "111.222.333-44");

    cout << pf1 << pf2 << pf3 << endl;

    PessoaJuridica pj1("Joao", "08.965.289-0008/51", "Joao LTDA");
    PessoaJuridica pj2("Maria", "08.965.289-0008/51", "Maria LTDA");
    PessoaJuridica pj3("Jose", "08.965.289-0008/51", "Jose LTDA");

    cout << pj1 << pj2 << pj3 << endl;
    return 0;
}