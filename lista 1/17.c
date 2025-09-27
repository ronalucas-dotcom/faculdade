#include <stdio.h>

int main(){
    puts("qual o raio ?");
    int x;
    scanf("%d",&x);
    printf("a circuferencia e %.2f\n:",2*3.14159*x );
    printf(" a area é %.2f\n:", 3.14159*x*x);


    return 0;
}