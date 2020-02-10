#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

void main(){
    Pilha p;
    int comando, num;
    iniPilha(&p);
    do{
        printf("\nPara Inserir um item na pilha digite 1 \nPara retirar um item da pilha digite 2 \nPara exibir os itens da pilha digite 3 \n");
        scanf("%d", &comando);
        switch (comando){
            case 1:
                printf("Qual numero deseja inserir?");
                printf("\n");
                scanf("%d", &num);
                pushPilha(&p, num);
                break;
            case 2:
                printf("\n");
                printf("Numero retirado :%d", popPilha(&p));
                break;
            case 3:
                printf("Numeros da pilha:\n");
                monstrarPilha(&p);
                break;
        }
    }while(comando!=0);
}