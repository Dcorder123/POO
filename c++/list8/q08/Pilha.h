#ifndef PILHA_H
#define PILHA_H 

#include <stdexcept>
using std::out_of_range;

#include <sstream> //processamento de string stream
using std::ostringstream;


template < class T >
class Pilha
{
public:
  Pilha( int = 10 );
  ~Pilha();
  
  bool push(const T &);
  bool pop(T &);

  bool isEmpty() const { return pos == 0; }
  bool isFull() const { return pos == tam;}
private:
  T *pPtr;
  int pos, tam;
};

template < class T >
Pilha<T>::Pilha( int tam )
{
  this->tam = ( (tam > 0) ? tam : 10 );
  pos = 0;

  pPtr = new T[this->tam];
}

template < class T >
Pilha<T>::~Pilha()
{
  delete [] pPtr;
}

template < class T >
bool Pilha<T>::push(const T &el)
{
  if (!isFull())
  {
    pPtr[pos++] = el;
    return true;
  }
  else{
        ostringstream str;
        str << "Pilha cheia! Não é possível inserir o elemento " << el;
        throw out_of_range(str.str());
  }
  return false;
}

template < class T>
bool Pilha<T>::pop(T &el)
{
    if (!isEmpty())
    {
        el = pPtr[--pos];
        return true;
    }
    else{
        ostringstream str;
        str << "Pilha vazia! Não é possível remover o elemento " << el;
        throw out_of_range(str.str());
    }
  return false;
}

#endif