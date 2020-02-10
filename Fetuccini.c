#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
int a, b, conta, i;

scanf("%d %d", &a, &b);

for(i=3; i<=20; i++)
{
    if ((i%2)==0) {
        conta=b-a;
    }else{
        conta=b+a;
    }
    printf("%d\n", conta);
    a=b;
    b=conta;
}
}