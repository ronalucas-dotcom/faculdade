#include <stdio.h>

int main(){
    puts("digite um numero");
    int x;
    scanf("%d",&x);

(x>0)?printf(" o valor absoluto é %d",x):printf("o valor absoluto é %d ", x*-1);

    return 0;
}