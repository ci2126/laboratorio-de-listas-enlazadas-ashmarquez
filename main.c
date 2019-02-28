#include <stdio.h>
#include <stdlib.h>

typedef struct nodo{
    int val;
    struct nodo *sig;
}Nodo;

typedef Nodo *Lista;

Lista newList(){
    return NULL;
}
void inserta(int x,Lista *L){
    Nodo *p=malloc(sizeof(Nodo));
    p->val=x;
    p->sig=*L;
    *L=p;
}
int esVacia(Lista L){
    return L==NULL;
}

int firstInList(Lista L){
    return L->val;
}

int estaEn(int x,Lista L){
    Nodo *p=L;
    while(p != NULL && p->val != x)
        p=p->sig;
    return p!=NULL;
}

void writeList(Lista L,char name[]){
    printf("\n%s=[",name);
    if(L==NULL) printf("].");
    else{
        while(L->sig != NULL){
            printf("%d, ",L->val);
            L=L->sig;
        }
        printf("%d].",L->val);
    }


}
void insertaT(int x, Lista *L){
    Nodo *p=malloc(sizeof(Nodo)), *q=*L;
    p->val=x;
    p->sig=NULL;
    if(*L==NULL) *L=p;
    else{
        while(q->sig != NULL)
            q=q->sig;
            q->sig=p;
        }
}

void elimina(int x, Lista *L){
    Nodo *p=*L,*q;
    if (p != NULL){
        if(p->val ==x){
           *L=p->sig;
           free(p);
        } else {
            while (p->sig != NULL && (p->sig)->val != x)p=p->sig;
            if (p->sig != NULL){
                q=p->sig;
                p->sig=q->sig;
                free(q);
            }

        }
    }

}
void clona(Lista L, Lista *N){
    *N=NULL;
    Nodo *q;
    if(L != NULL){
        *N=q;
        q->val=L->val;
        while(L != NULL){
            q->sig=malloc(sizeof(Nodo));
            (q->sig)->val=(L->sig)->val;
        }
        q->sig=NULL;
    }

}
void concat(Lista *L, Lista *K){
    if(*L==NULL)*L=*K;
    else{
        Nodo *p=*L;
        while(p->sig != NULL) p=p->sig;
        p->sig=*K;
    }
    *K=NULL;
}

int main (){
    printf("\nProbando Lista:");
    Lista L=newList(), L1=newList();
    writeList(L,"L");
    inserta(4,&L);
    inserta(9,&L);
    inserta(5,&L);
    insertaT(8,&L);
    elimina(9,&L);
    inserta(2,&L1);
    inserta(3,&L1);
    concat(&L,&L1);
    writeList(L,"L");
    printf("\nA la cabeza de L esta: %d", firstInList(L));
    if(esVacia(L1))printf("\nL1 es vacia.");
        else printf("\nL1 No es vacia.");
    int x=7; char s[]="L";
    if(estaEn(x,L)) printf("\n %d esta en %s.", x,s);
    else printf("\n %d No esta en %s.", x,s);
    return 0;
}






