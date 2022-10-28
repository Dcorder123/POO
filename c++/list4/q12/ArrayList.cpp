#include <iostream>
using std::cout,std::endl;

#include "ArrayList.h"

ArrayList::ArrayList(int tam) : pos(0)
{
  if (tam > 0)
  {
    this->tam = tam;
    arr = new int[tam];
  }
  else
  {
    arr = nullptr;
    this->tam = 0;
  }
}

  ArrayList::~ArrayList()
  {
    if (arr)
      delete [] arr;
  }


  ArrayList &ArrayList::add(int v)
  {
    if (pos < tam)
      arr[pos++] = v;
    
    return *this;
  }

    int ArrayList::busca(int v)const
    {
        if (v < pos-1)
            return arr[v];
        else
            return -1;
    }

    void ArrayList::remove(int v)
    {
    
        for (int j = v; j < this->pos-1; j++)
        {
            arr[j] = arr[j + 1];
        }
        pos--;
     }

    void ArrayList::removeEL(int v)
    {
        for (int i = 0; i < this->pos; i++)
        {
            if (arr[i] == v)
            {  
                for (int j = i; j < this->pos-1; j++)
                {
                    arr[j] = arr[j + 1];
                }
            pos--;
            }
        }
    }
  void ArrayList::print() const
  {
    for (int i = 0 ; i < pos ; i++)
      std::cout << arr[i] << " ";
    std::cout << std::endl;
  }

  void ArrayList::somaArray(int v)
  {
    for (int i = 0; i < pos; i++)
    {
      arr[i] = arr[i] + v;
    }
  }

  void ArrayList::subArray(int v)
  {
    for (int i = 0; i < pos; i++)
    {
      arr[i] = arr[i] - v;
    }
  }

  void ArrayList::multArray(int v)
  {
    for (int i = 0; i < pos; i++)
    {
      arr[i] = arr[i] * v;
    }
  }

  void ArrayList::divArray(int v)
  {
    for (int i = 0; i < pos; i++)
    {
      arr[i] = arr[i] / v;
    }
  }