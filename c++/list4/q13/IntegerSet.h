#ifndef INTEGERSET_H
#define INTEGERSET_H

class IntegerSet
{
    friend IntegerSet operator|(const IntegerSet &, const IntegerSet &);
    friend IntegerSet operator&(const IntegerSet &, const IntegerSet &);
public:
    IntegerSet();
    IntegerSet (int[], int);

    IntegerSet &operator<<(int);
    IntegerSet &operator>>(int);
    void print() const;
    
private:
    int arr[100];
    int tam;
};

#endif