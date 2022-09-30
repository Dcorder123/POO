#include <iostream>
#include <string>
#include "Cupom.h"

using namespace std;

Cupom::Cupom(string id, string descricao, float preco, int quantidade) {
  setId(id);
  setDescricao(descricao);
  setPreco(preco);
  setQuantidade(quantidade);
}

void Cupom::setId(string id1) {
  id = id1;
}

void Cupom::setDescricao(string descricao1) {
  descricao = descricao1;
}

void Cupom::setPreco(float preco1) {
  if (preco1 > 0) {
    preco = preco1;
  } 
  else {
    preco = 0;
  }
}

void Cupom::setQuantidade(int quantidade1) {
  if (quantidade1 > 0) {
    quantidade = quantidade1;
  } 
  else {
    quantidade = 0;
  }
}

float Cupom::calculaCupom() {
  return (preco * quantidade);
}

string Cupom::getId() {
  return id;
}

string Cupom::getDescricao() {
  return descricao;
}

float Cupom::getPreco() {
  return preco;
}

int Cupom::getQuantidade() {
  return quantidade;
}

void Cupom::mostrarCupom() {
  cout << "ID: " << getId() << endl;
  cout << "Descrição: " << getDescricao() << endl;
  cout << "Preço: " << getPreco() << endl;
  cout << "Quantidade: " << getQuantidade() << endl;
  cout << "Total da nota: " << calculaCupom() << endl;
}