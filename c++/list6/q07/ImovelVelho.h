#ifndef IMOVELVELHO_H
#define IMOVELVELHO_H

#include "Imovel.h"

class ImovelVelho : public Imovel
{
public:
    ImovelVelho(string="imovel", double=0);
    void setPreco(double);
    double getPreco()const;
};

#endif