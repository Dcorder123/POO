#ifndef EMPRESA_H
#define EMPRESA_H

#include "PessoaJuridica.h"
#include "Funcionario.h"
#include "PessoaFisica.h"
#include "Cliente.h"
#include <iostream>
#include <vector>
using namespace std;

class Empresa : public PessoaJuridica
{
    public:
        Empresa();
        Empresa(string nome, string cnpj, string razaoSocial);
        void setFuncionarios();
        void setClientes();
        void addFuncionario(Funcionario &);
        void addCliente(Cliente &);
        void imprimeFuncionarios();
        void imprimeClientes();
        double calculaFolhaPagamento();
    protected:
        vector<Funcionario> funcionarios;
        vector<Cliente> clientes;

};

#endif