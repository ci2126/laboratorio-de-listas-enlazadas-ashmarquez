/* Ashly Marquez 15-10870
Ejercicio Nº1: Mezclas de listas
*/
#include <stdio.h>
#include <stdlib.h>
void merge(Lista *L, Lista *M){
    Lista K=newlist()
    Nodo *p=NULL;
    while (*L!=NULL && *M!=NULL){
        if((*L->val) <= (*M->val)){
            inserta(*L->val, &p); *L=*L->sig;
        }
        else {
          inserta(*M->val, &p); *M=*M->sig;
        }
    }

    while(*L!=NULL){
        inserta(*L->val, &p); *L=*L->sig;
    }

    while(*M!=NULL){
        inserta(*M->val, &p); *M=*M->sig;
    }
    *K=p;
}

