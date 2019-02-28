#include <stdio.h>
#include <stdlib.h>

int sizeR(Lista L){
    if (L==NULL) return 0;
    else return 1+ sizeR(L->);
}
int estaEnR (int x,Lista L){
    if(L==NULL) return 0;
    else if(L->val==x)return 1;
    return estaEnR(x,L->sig);
}
void insertaTR(int x, Lista *L){
    if(*L==NULL){
        Nodo *p=malloc(sizeof(Nodo));
        p->val=x;
        p->sig=NULL;
        *L=p;
    }
    else insertaTR(x, &((*L)->sig));
}
void eliminaR(int x, Lista *L){
    if(*L != NULL){
        if((*L)->val==x){
            Nodo *p=*L;
            *L=(*L)->sig;
            free(p);
        }
        else eliminaR(x,&((*L)->sig));
    }
}
int sizeI(Lista L){
    int r=0;


}

int main(){
    printf("Probando lista:");
    insertaTR(9,&L);
    insertaTR(5,&L);
    insertaTR(8,&L);
    eliminaR(9,&L);
    writeList(L,"L");

    return 0;

}
