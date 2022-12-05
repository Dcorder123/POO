#ifndef PRODUTOS_H
#define PRODUTOS_H
// feito por Daniel Barbosa Vasconcelos
// em 2022-11-18

#include <string>
#include <iostream>
using namespace std;

class Produto {
    friend std::ostream& operator<<(std::ostream& os, const Produto& produto);
public:
    Produto();
    Produto(string nome, string,string);
    void setNome(string nome){this->nome = nome;}
    void setCategoria(string categoria){this->categoria = categoria;}
    void setValidade(string validade){this->validade = validade;}
    string getNome()const{return nome;}
    string getCategoria()const{return categoria;}
    string getValidade()const{return validade;}
    protected:
    string nome;
    string categoria;
    string validade;
};

#endif /* PRODUTOS_H */