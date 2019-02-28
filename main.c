/* Ashly Marquez 15-10870
Ejercicion Nº3 Halle el maximo en una lista no vacia*/
#include <stdio.h>
#include <stdlib.h>

void max(int x, Lista *L){
    Nodo *p=malloc(sizeof(Nodo));
    p->val=x;
    while(*p!=NULL){
        Nodo *q=malloc(sizeof(Nodo));
        Nodo *q=*L;
        if (*q->val >= *p->val){
          *p=p->sig;
          *q=p->val;
          *q->val=*p->val;
        }
        else *p=*p->val
    }
}

