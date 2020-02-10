#include <stdio.h>
#include <stdlib.h>
#include "Lista.h"
#define TAM 5   
//Mudar o nó para armazenar um char
//Não armazena palavras repetidas, só coloca um cont dentro do nó de cada palavra


int main(){
    int i, j, num, classe;
    no *vet[TAM];
    for(i=0;i<TAM;i++){
        iniLista(&vet[i]);
    }
    for(i=0;i<10;i++){
        scanf("%d", &num);
        classe = num%5;
        insereInicioLista(&vet[classe], num);
    }

    for(i=0;i<TAM;i++){
        printf("Classe: %d\n", i);
        percorreLista(&vet[i]);
    }
}