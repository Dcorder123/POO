#ifndef CARRO_H
#define CARRO_H

#include <string>
using std::string;

//Interface
class Carro
{

public:

    Carro(string nome);

    void setMarca(string nome);
    void setAno(int ano);

    string getMarca();
    int getAno();
    void displayMessage();

private:
    string marca;
    int ano;
};

#endif