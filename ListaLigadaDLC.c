#include <stdio.h>
#include <stdlib.h>

typedef struct noTag
{
    int info;
    struct noTag *Next;
    struct noTag *Prev;
} no;
no *L;


void iniLista(no **L){
    *L=NULL;
}

no percorreLista(no **L){
    
    no *P;
    P=*L;
    if(P!=NULL){
        do{
            printf("%d\t", P->info);
            P=P->Next;
        }while(P != *L);
        printf("\n");
    }
}
no insereInicioListaDLC(no **L, int num){
    no *N;
    N= malloc(sizeof(no));
    N->info= num;
    if(*L != NULL){
        N->Prev=*L;
        N->Next = (*L)->Next;
        *L = N;
    }else{
        N->Prev=N;
        N->Next = N;
        *L = N;
    }
    

}
int main(){
    insereInicioListaDLC(&L,10);
    insereInicioListaDLC(&L,5);
    insereInicioListaDLC(&L,56);
    percorreLista(&L);

}