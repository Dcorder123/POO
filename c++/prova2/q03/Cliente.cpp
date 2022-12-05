#include "Cliente.h"
#include <iostream>
#include <string>
using namespace std;

Cliente::Cliente() : PessoaFisica()
{
    endereco = "";
    telefone = "";
}

Cliente::Cliente(string nome, string cpf, string endereco, string telefone) : PessoaFisica(nome, cpf)
{
    setEndereco(endereco);
    setTelefone(telefone);
}

ostream &operator<<(ostream &os, const Cliente &c)
{
    os << "Nome: " << c.nome << endl;
    os << "CPF: " << c.cpf << endl;
    os << "Endereco: " << c.endereco << endl;
    os << "Telefone: " << c.telefone << endl;
    return os;
}

