#include <iostream>
using std::cout,std::endl;

#include "IntegerSet.h"

IntegerSet::IntegerSet(){

    tam = 100;
    
    for (int i = 0 ; i < tam ; i++){
        arr[i] = 0; 
    }
        
}

IntegerSet::IntegerSet(int array[], int size){
    for (int i = 0 ; i < size ; i++){
        arr[n[i]] = 1; 
    }
    
    return *this;
}



IntegerSet &IntegerSet::insertElement(int n){
     this->arr[n] = 1;

    return *this;
}

IntegerSet &IntegerSet::deleteElement(int n){
    this->arr[n] = 0;

    return *this;
}

void IntegerSet::print() const{
    for (int i = 0 ; i < tam ; i++){
        if (arr[i] == 1){
            cout << i << " ";
        }
    }
}

IntegerSet unionOfSets(const IntegerSet &a, const IntegerSet &b){
    IntegerSet c;
    
    for (int i = 0 ; i < 100 ; i++){
        if (a.arr[i] == 1 || b.arr[i] == 1){
            c.arr[i] = 1;
        }
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

