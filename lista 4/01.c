#include <stdio.h>

int main(){
    int x,y,s;
    int *px = &x;
    int *py = &y;
    int *ps = &s;

    puts(" digite o primeiro valor");
    scanf("%d",px);
    puts("digite o segundo valor");
    scanf("%d",py);

    *ps = *px + *py;

    printf("o indereço é [%p] é a soma foi: %d \n",&s,*ps);
    
    return 0;
}