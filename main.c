/* Ashly Marquez 15-10870
Ejercicio Nº2 Insercion ordenada */
#include <stdio.h>
#include <stdlib.h>

void insertOrd(int x, Lista *L){
    Nodo *p=malloc(sizeof(Nodo));
    Nodo *q=malloc(sizeof(Nodo));
    Nodo *r=malloc(sizeof(Nodo));
    p->val=x;
    if(*L==NULL){
        p->sig=NULL;
        *L=p;
    }
    else{
        q=*L;
        while (q->sig != NULL && x>q->val){
            r=q;
            q=q->sig;
        }
    if (x<=q->val){
        if(q==*L){
            *L=p;
            p->sig=q;
        }
        else {
            r->sig=p;
            p->sig=q;
        }
    }
    else {
        p->sig=q->sig;
        q->sig=*p;
    }
    }
}

