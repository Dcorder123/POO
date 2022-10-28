#ifndef ARRAYLIST_H
#define ARRAYLIST_H



class ArrayList
{
public:
    ArrayList(int);
    ~ArrayList();

    ArrayList &add(int);
    int busca(int)const;
    void remove(int);
    void removeEL(int);
    void print() const;

private:
  int *arr;
  int tam;
  int pos;
};

#endif