#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <iostream>
#include <string>
#include "PessoaFisica.h"
using namespace std;
class Funcionario : public PessoaFisica
{
    private:
        string matricula;
        double salarioBase;
        int cargaHoraria;
        int horasTrabalhadasMes;
    public:
        Funcionario();
        Funcionario(string nome, string cpf, string matricula, double salario, int cargaHoraria, int horasTrabalhadasMes);
        void setMatricula(string matricula){this->matricula = matricula;}
        void setSalarioBase(float salarioBase){this->salarioBase = salarioBase;}
        void setCargaHoraria(int cargaHoraria);
        void setHorasTrabalhadasMes(int horasTrabalhadasMes);
        string getMatricula()const{return matricula;}
        float getSalarioBase()const{return salarioBase;}
        int getCargaHoraria()const{return cargaHoraria;}
        int getHorasTrabalhadasMes()const{return horasTrabalhadasMes;}
        double calcularSalario();
        double getSalario()const{return salarioBase;}
        friend ostream& operator<<(ostream& os, Funcionario& f);
};

#endif