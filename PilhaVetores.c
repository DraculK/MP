#include <stdio.h>
#define SIZE 10

typedef struct{
   int topo;
   int item[SIZE];
} pilha;

pilha* criarPilha() {
  pilha* p = (pilha*) malloc(sizeof(pilha));
  p->topo = 0;
  return p;
}

int push(pilha* p, int item){
  if(p->topo == SIZE){
    printf("Sem espaço!");
    exit(1);
  }
  p->item[p->topo] = item;
  p->topo++;
}

int pop(pilha* p){
  int item;
  if(empty(p)){
    printf("Vazia!");
    exit(1);
  }
  item = p->item[p->topo-1];
  p->topo--;
  return item;
}

int empty(pilha* p){
  return (p->topo==0);
}

int topo(pilha* p){
  return p->item[p->topo-1];
}
/*
int main(){
	pilha* p = criarPilha();
	push(p,1);
	push(p,2);
	push(p,4);
	printf("Topo: %d\n", topo(p));
	printf("Retirar: %d\n", pop(p));
	printf("Topo: %d\n", topo(p));
    return 0;
}
*/