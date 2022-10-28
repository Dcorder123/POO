#include <iostream>
using std::cout,std::endl;

#include "IntegerSet.h"

IntegerSet::IntegerSet(){
    arr = new int[100];
    for (int i = 0; i < 100; i++)
    {
        this->arr[i] = i;
    }
}

IntegerSet::IntegerSet(int tam){
    arr = new int[tam];
    pos = 0;
    this->tam = tam;
}

IntegerSet::~IntegerSet(){
    delete [] arr;
}

IntegerSet &IntegerSet::insertElement(int n){
    if (pos < tam)
    {
        arr[pos++] = n;
    }
    return *this;
}

IntegerSet &IntegerSet::deleteElement(int n){
    for(int i = 0; i < pos; i++){
        if(arr[i] == n){
            for(int j = i; j < pos; j++){
                arr[j] = arr[j+1];
            }
            pos--;
            break;
        }
    }
    return *this;
}



void IntegerSet::print() const{
    for(int i = 0; i < 100; i++){
        cout << this->arr[i] << " ";
    }
    cout << endl;
}

IntegerSet unionOfSets(const IntegerSet &a, const IntegerSet &b){
    IntegerSet c(a.tam + b.tam);
    for(int i = 0; i < a.pos; i++){
        c.insertElement(a.arr[i]);
    }
    for(int i = 0; i < b.pos; i++){
        c.insertElement(b.arr[i]);
    }
    return c;
}

IntegerSet intersectionOfSets(const IntegerSet &a, const IntegerSet &b){
    IntegerSet c(a.tam + b.tam);
    for(int i = 0; i < a.pos; i++){
        for(int j = 0; j < b.pos; j++){
            if(a.arr[i] == b.arr[j]){
                c.insertElement(a.arr[i]);
                break;
            }
        }
    }
    return c;
}

