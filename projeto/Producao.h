#ifndef PRODUCAO_H
#define PRODUCAO_H

#include "Ator.h"
#include "Diretor.h"
#include "Pessoa.h"
#include <string>
#include <iostream>
#include <vector>

using namespace std;

/*Classe Produção 
que cria armazena uma lita de atores e uma lista de diretores 
e o nome da produção sendo filme ou serie */
class Producao {
public:
    Producao(string n, vector<Ator> a, vector<Diretor> d, string t);

    string getNome() const{ return nome; }/*metodo retorna o nome da produção*/
    void setNome(string n) { nome = n; }/*metodo que atribui o nome da produção*/
    void addAtor(Ator a) { atores.push_back(a); }/*metodo que adiciona um ator a lista de atores*/
    void addDiretor(Diretor d) { diretores.push_back(d); }/*metodo que adiciona um diretor a lista de diretores*/
    void removerAtor(Ator a);/*metodo que remove um ator da lista de atores*/
    void removerDiretor(Diretor d);/*metodo que remove um diretor da lista de diretores*/
    virtual void play() = 0;/*metodo virtual que imprime o nome da produção*/
    string getTipo() const { return tipo; }/*metodo retorna o tipo da produção*/


protected:
    string nome;
    vector<Ator> atores;
    vector<Diretor> diretores;
    string tipo;
};

#endif