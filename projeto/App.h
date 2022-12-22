#ifndef APP_H
#define APP_H
#include <iostream>
#include <string>
#include "Estado.h"

using namespace std;
/*Classe App que contém o nome e a versão do app
  tem o metodo run que é virtual
  */
class App
{
public:
    App(string nome, string versao): nome(nome), versao(versao){}//construtor da classe App
    void setNome(string){this->nome = nome;}//metodo que atribui o nome do app
    void setVersao(string){this->versao = versao;}//metodo que atribui a versão do app
    string getNome()const{return nome;}//metodo retorna o nome do app
    string getVersao()const{return versao;}//metodo retorna a versão do app
    virtual void run() = 0;//metodo virtual run
    protected:
    string nome;
    string versao;
};

#endif // APP_H