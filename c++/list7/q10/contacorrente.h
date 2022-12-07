#ifndef CONTA_CORRENTE_H
#define CONTA_CORRENT_H

#include "conta.h"

#include <iostream>

using std::cout;
using std::endl;
using std::string;

class ContaCorrente : public Conta {
public:
ContaCorrente(int numContac, string NomeCc, int saldoc) : Conta(numContac, NomeCc, saldoc) {tipo = "Conta Corrente";}


};

#endif