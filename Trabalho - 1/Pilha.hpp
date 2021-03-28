//Usado cpp lint
#ifndef PILHA_H
#define PILHA_H
#include<iostream>

using namespace std;
//Tamanho máximo da pilha
#define SIZE 5
//Tipo que permite mudar de int para string
#define Type int
//Classe pilha e funções utilizadas no cpp

class PilhaVetor{
    private:
        Type array[SIZE];
        int top;
    public:
        PilhaVetor(int);
        Type push(Type);
        Type pop();
        bool empty();
        bool full();
        void show_top();
};

/*
//PILHA LISTA
class PilhaLista{
    struct Node{
        int data;
        Node * proximo;
    };
    
    private:
        Node * top;
        int size;
    public:
        PilhaLista();
        Type push(Type);
        Type pop();
        bool empty();
        void show_top();
};
*/
#endif