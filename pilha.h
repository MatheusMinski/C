#define MAX 30

typedef struct {
    int item[MAX];
    int topo;
}Pilha;

void iniPilha(Pilha *p){
    p->topo = 0;
}
int vaziaPilha(Pilha *p){
    if (p->topo==0){
        return 1;
    }else{
        return 0;
    }
}
int cheiaPilha (Pilha *p){
    if(p->topo==MAX){
        return 1;
    }else{
        return 0;
    }
}
int pushPilha (Pilha *p, int num){
    if(cheiaPilha(p)){
        return (-2);
    }else{
        p->item[p->topo]=num;
        p->topo++;
    }   
}

int popPilha(Pilha *p){
    if(vaziaPilha(p)){
        return -1;
    }else{
        p->topo--;
        return p->item[p->topo];
    }
}
void mostrarPilha(Pilha *p){
    int i;
    for(i=p->topo-1;i>=0;i--){
        printf("\n");
        printf("%d", p->item[i]);
    }

}
void mostrarPilhaBin(Pilha *p){
    int i;
    for(i=p->topo-1;i>=0;i--){
        printf("%d", p->item[i]);
        printf(" ");
    }

}

void menuHanoi(Pilha *p, Pilha *p2, Pilha *p3, int topo1, int topo2, int topo3){
    int i;
    printf("p1:\tp2:\tp3:\n");
    for(i=MAX;i>0;i--){
        if(i>topo1){
            printf("-\t");
        }else{
            printf("%d \t", p->item[i-1]);
        }
        if(i>topo2){
            printf("-\t");
        }else{
            printf("%d\t", p2->item[i-1]);
        }
        if(i>topo3){
            printf("-\t");
        }else{
            printf("%d\t", p3->item[i-1]);
        }
        printf("\n");
    }

}

int main(){
    int nome;
    pushPilha(L,50);
}