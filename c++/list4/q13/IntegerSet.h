#ifndef INTEGERSET_H
#define INTEGERSET_H

class IntegerSet
{
    friend IntegerSet unionOfSets(const IntegerSet &, const IntegerSet &);
    friend IntegerSet intersectionOfSets(const IntegerSet &, const IntegerSet &);
public:
    IntegerSet();
    IntegerSet (int);
    ~IntegerSet();

    IntegerSet &insertElement(int);
    IntegerSet &deleteElement(int);
    void print() const;
    
private:
    int *arr;
    int pos;
    int tam;
};

#endif