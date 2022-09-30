#ifndef CUPOM_H
#define CUPOM_H
#include <string>
using std::string;


class Cupom
{
public:
    Cupom(string id, string descricao, float preco, int quantidade);
    void setId(string id);
    void setDescricao(string descricao);
    void setPreco(float preco);
    void setQuantidade(int quantidade);
    string getId();
    string getDescricao();
    float getPreco();
    int getQuantidade();
    float calculaCupom();
    void mostrarCupom();
private:
    string id;
    string descricao;
    float preco;
    int quantidade;
};


#endif
