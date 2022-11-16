#include <iostream>
#include <string>
#include <vector>
#include "Empresa.h"


using namespace std;



Empresa::Empresa(string nome, string cnpj, string razaoSocial) : PessoaJuridica(nome, cnpj, razaoSocial)
{
    setFuncionarios();
    setClientes();
}


void Empresa::setFuncionarios()
{
    Funcionario f1("Joao", "123.456.789-00", "123", 1000, 40, 160);
    Funcionario f2("Maria", "987.654.321-00", "456", 2000, 40, 160);
    Funcionario f3("Jose", "123.987.654-00", "789", 3000, 40, 160);
    Funcionario f4("Ana", "456.123.789-00", "101", 4000, 40, 160);
    Funcionario f5("Pedro", "789.123.456-00", "112", 5000, 40, 160);
    addFuncionario(f1);
    addFuncionario(f2);
    addFuncionario(f3);
    addFuncionario(f4);
    addFuncionario(f5);
}


void Empresa::setClientes()
{
    Cliente c1("Joao", "123.456.789-00", "Rua 1", "1111-1111");
    Cliente c2("Maria", "987.654.321-00", "Rua 2", "2222-2222");
    addCliente(c1);
    addCliente(c2);

}

void Empresa::addFuncionario(Funcionario &f)
{
    funcionarios.push_back(f);
}

void Empresa::addCliente(Cliente &c)
{
    clientes.push_back(c);
}



void Empresa::imprimeFuncionarios()
{
    for (int i = 0; i < funcionarios.size(); i++)
    {
        cout << funcionarios[i] << endl;
    }
}

void Empresa::imprimeClientes()
{
    for (int i = 0; i < clientes.size(); i++)
    {
        cout << clientes[i] << endl;
    }
}

double Empresa::calculaFolhaPagamento()
{
    double total = 0;
    for (int i = 0; i < funcionarios.size(); i++)
    {
        total += funcionarios[i].calcularSalario();
    }
    return total;
}
