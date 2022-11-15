#include <iostream>
#include "PessoaFisica.h"
#include "Pessoa.h"
#include "Funcionario.h"
using namespace std;

Funcionario::Funcionario()
{
    matricula = "Sem matricula";
    salarioBase = 0;
    cargaHoraria = 0;
    horasTrabalhadasMes = 0;
}

Funcionario::Funcionario(string nome, string cpf, string matricula, double salario, int cargaHoraria, int horasTrabalhadasMes) : PessoaFisica(nome, cpf)
{
    setMatricula(matricula);
    setSalarioBase(salario);
    setCargaHoraria(cargaHoraria);
    setHorasTrabalhadasMes(horasTrabalhadasMes);
}

void Funcionario::setCargaHoraria(int cargaHoraria)
{
    if(cargaHoraria > 0)
        this->cargaHoraria = cargaHoraria;
    else
        this->cargaHoraria = 0;
}

void Funcionario::setHorasTrabalhadasMes(int horasTrabalhadasMes)
{
    if(horasTrabalhadasMes > 0)
        this->horasTrabalhadasMes = horasTrabalhadasMes;
    else
        this->horasTrabalhadasMes = 0;
}

double Funcionario::calcularSalario()
{
    float salario = 0;
    salario = salarioBase * (horasTrabalhadasMes / cargaHoraria);
    return salario;
}

ostream& operator<<(ostream& os, Funcionario& f)
{ 
    os << "Nome: " << f.getNome() << endl;
    os << "CPF: " << f.getCpf() << endl;
    os << "Matricula: " << f.getMatricula() << endl;
    os << "Salario: " << f.getSalario() << endl;
    os << "Carga Horaria: " << f.getCargaHoraria() << endl;
    os << "Horas Trabalhadas: " << f.getHorasTrabalhadasMes() << endl;
    os << "Salario Bruto: " << f.calcularSalario() << endl;
    return os;
}

