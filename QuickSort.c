#include <stdio.h>
#include <stdlib.h>

void quick_sort(int *vet, int esquerda, int direita) {
    int i, j, pivo, aux, meio;
     
    i = esquerda;
    j = direita;
    meio = (esquerda + direita) / 2;
    pivo = vet[meio];


    printf("\nEsquerda: %d, Direita: %d Pivo: %d\n", esquerda, direita, pivo);
    for(int i = 0 ; i<10 ; i++)
        printf("%d-", vet[i]);
    
    printf("\n");

    while(i <= j) {
        while(vet[i] < pivo && i < meio) {
            i++;
        }
        while(vet[j] > pivo && j > meio) {
            j--;
        }
        if(i <= j) {
            printf("Troca realizada: %d e %d\n",vet[i], vet[j]);
            aux = vet[i];
            vet[i] = vet[j];
            vet[j] = aux;
            i++;
            j--;
        }
    }
    for(int i = 0 ; i<10 ; i++)
        printf("%d-", vet[i]);
    
    printf("\n");
     
    if(j > esquerda) {
        quick_sort(vet, esquerda, j);
    }
    if(i < direita) {
        quick_sort(vet, i, direita);
    }
}

int main(){
    int vet[10]={1,5,9,8,7,4,5,6,8,50};
    quick_sort(vet,0,9);
    
}