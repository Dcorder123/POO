#ifndef CARRO_H
#define CARRO_H

#include <string>
using std::string;

//Interface
class Carro
{

public:

    Carro(string marca, int ano, string nome);

    void setMarca(string marca);
    void setAno(int ano);
    void setProprietario(string nome);

    string getMarca(){return marca;}
    int getAno(){return ano;}
    string getProprietario();
    void displayMessage();

private:
    string marca;
    int ano;
    string proprietario;
};

#endif