#include <stdio.h>

typedef struct _nodo {
    int item;
    struct _nodo *prox;
} nodo;

typedef struct _pilha{
   int tamanho;
   nodo *topo;
} pilha;

void criarPilha(pilha *p){
    p = (pilha*)malloc(sizeof(pilha));
    if(p != NULL) {
        p->tamanho = 0;
        p->topo = NULL;
    } else {
        printf("Sem memoria!\n");
        exit(1);
    }
}

int empty(pilha *p){
    return (p->topo == NULL);
}

nodo* topo(pilha *p){
    return pilha->topo;
}

int push(pilha *p, int x){
    nodo *novo = (nodo*)malloc(sizeof(nodo));
    novo->item = x;
    novo->prox = p->topo;
    p->topo = novo;
    p->tamanho++;
}

int pop(pilha *p){
    int item;
    nodo* aux;

    if(!empty(p)){
        int item = p->topo->item;
        aux = p->topo;
        p->topo = p-> topo->prox;
        p->tamanho--;
        free(aux);
        return item;
    } else {
        printf("Pilha vazia! \n");
        return 0;
    }
}
