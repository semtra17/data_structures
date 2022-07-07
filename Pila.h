#ifndef PILA_H_INCLUDED
#define PILA_H_INCLUDED
#include <iostream>
using namespace std;



struct NodoPila{
    int index;
    void * dato;
    NodoPila * nextNode;
};


void apilar(NodoPila *&, void*);
void desapilar(NodoPila *&pila, void*);

#endif // PILA_H_INCLUDED
