#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <string>
using std::string;

class Empregado
{
    public:
        Empregado(string, string, double);
        void setNome(string);
        void setSobrenome(string);
        void setSalario(double);
        string getNome();
        string getSobrenome();
        double getSalario();
        void aumentoSalario();
        void displayMessage();
    private:
        string nome;
        string sobrenome;
        double salario;
}; // fim da classe Empregado

#endif