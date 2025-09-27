#include <stdio.h>
#include <stdlib.h>

int main(){
int x,y;
puts("digite o numero");
scanf("%d",&x);
puts("digite outro numero");
scanf("%d",&y);

printf("a soma é %d\n", x+y);
printf("o pruduto é %d\n", x*y);
printf("a diferença é %d\n", x-y);
printf("o cociente é %d\n", x/y);
printf("o resto é %d\n", x%y);

    return 0;
}