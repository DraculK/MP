//Usado cpp lint
#include "Pilha.hpp"

using namespace std;
//Cria a pilha

PilhaVetor::PilhaVetor(int oi){
    top = -1;
}

//Função que retorna se a pilha está vazia
bool PilhaVetor::empty(){
    if(top==-1){
        return true;
    }else{
        return false;
    }
}

//Função que coloca novos itens no top da pilha, caso tenha espaço
Type PilhaVetor::push(Type x){
    if(top==SIZE-1){
        cout<<"A pilha está cheia!\n";
    }else{
        top++;
        array[top]=x;
    }
}

//Tira um item da pilha, caso não esteja vazia
Type PilhaVetor::pop(){
    if(empty())
        cout<<"A pilha está vazia!\n";
    else
        top--;
}

//Mostra o último item colocado na pilha
void PilhaVetor::show_top(){
    if(empty())
        cout<<"A pilha está vazia!\n";
    else
        cout<<"O elemento do topo é: "<<array[top]<<"\n";
}


//Pilha Dinâmica
/*
PilhaLista::PilhaLista(){
    size = 0;
    top = nullptr;
}

Type PilhaLista::push(Type x){
    Node * n = new Node;

    n->data = x;
    n->proximo = top;
    top = n;
    size++;
}

Type PilhaLista::pop(){
    if (top!=nullptr){
        int x = top->data;
        Node * tempNode = top;
        delete top;
        top = tempNode->proximo;
        delete tempNode;
        return x;
    }else{
        cout<<"Pilha vazia!\n";
        return 0;
    }
}

bool PilhaLista::empty(){
    return size==0;
}

void PilhaLista::show_top(){
    if(empty())
        cout<<"A pilha está vazia!\n";
    else
        cout<<"O elemento no topo é: "<<top->data;
}
*/