#ifndef PERSONAGEM_H
#define PERSONAGEM_H

#include <string>
using std::string;

class Personagem
{
public:
    Personagem(string nomePer,string sexoPer);
    void setNome(string nome);
    string getNome(){return nome;}
    void setSexo(string sexo);
    string getSexo(){return sexo;}
    void trocaAlma(Personagem &p);

private:
    string nome;
    string sexo;
    
}; // fim da classe Personagem

#endif