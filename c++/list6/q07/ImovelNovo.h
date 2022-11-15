#ifndef IMOVELNOVO_H
#define IMOVELNOVO_H

#include "Imovel.h"

class ImovelNovo : public Imovel
{
public:
    ImovelNovo(string="imovel", double=0);
    void setPreco(double);
    double getPreco()const;
};

#endif