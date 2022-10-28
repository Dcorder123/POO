#ifndef PERSONAGEM_H
#define PERSONAGEM_H

#include <string>
using std::string;

class Personagem
{
public:
    Personagem(string nomePer);
    Personagem(string nomePer, string papelPer, string FilmePer= "Star Wars");
    void setNome(string nome); 
    string getNome(){return nome;}
    void setPapel(string papel);
    string getPapel(){return papel;}
    void setFilme(string filme);
    string getFilme(){return nomeFilme;}
    void displayMessage();

private:
    string nome;
    string papel;
    string nomeFilme;
}; // fim da classe Personagem

#endif