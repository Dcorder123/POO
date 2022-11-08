
//
//feito por Daniel Barbosa Vasconcelos - 08/11/2022
//

#ifndef INTEGERSET_H
#define INTEGERSET_H


class IntegerSet {
    friend IntegerSet operator|(IntegerSet &, IntegerSet &); //recebe dois IntegerSet (conjuntos) e cria e retorna um terceiro conjunto que representa a união dos conjuntos
    friend IntegerSet operator&(IntegerSet &, IntegerSet &); //recebe dois IntegerSet (conjuntos) e cria e retorna um terceiro conjunto que representa a interseção dos conjuntos
public:
    IntegerSet();
    IntegerSet(const int *, int);
 
    
    IntegerSet &operator<<(int);//insere um novo inteiro x no conjunto (seta a posição x do array para 1)
    IntegerSet &operator>>(int);//deleta um inteiro x do conjunto (seta a posição x do array para 0
    void print() const;

private:
    int * array{};
    int size;
};


#endif
