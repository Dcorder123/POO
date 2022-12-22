#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>
#include <string>

using namespace std;
/* Classe pessoa 
que contém o nome da pessoa
tem o metodo imprimir que imprime o nome da pessoa

*/

class Pessoa {
public:
    Pessoa(string n );
    string getNome() const{ return nome; }
    void setNome(string n) { nome = n; }/*metodo imprimir que imprime o nome da pessoa*/
    void imprimir();/*metodo virtual que imprime o nome da pessoa*/


protected:
    string nome;
};

#endif

    

