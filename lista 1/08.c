#include <stdio.h>
#include <stdlib.h>

int main(){
    puts("qual o numero");
    int x;
    scanf("%d",&x);
    printf(" o sucessor é %d e o antecessor é %d", x+1,x-1);

    return 0;
}