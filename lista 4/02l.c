#include <stdio.h>

int main(){
    int x,y,aux;
    int *px = &x;
    int *py = &y;
    int *paux = &aux;

    puts(" digite o primeiro numero");
    scanf("%d",px);
    puts("digite o segundo numero");
    scanf("%d",py);

    *paux = *px;
    *px = *py;
    *py = *paux;

    printf(" os numeros trocados  %d, %d",*px,*py);

    return 0;
}