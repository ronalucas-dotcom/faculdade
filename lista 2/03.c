#include <stdio.h>
int main(){
    int x,fat = 1,i;

    puts("digite o numero");
    scanf("%d",&x);
    for ( i = 1; i <= x; i++)
    {
        fat = fat*i;
    }
    printf("o fatorial do numero é %d",fat);

    return 0;
}
