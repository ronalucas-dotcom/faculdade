#include <stdio.h>

int main(){
    int a=1,b=1,c;
    printf("Serie de Fibonacci ate o 20º termo:\n");
    printf("%d %d ", a, b);
    for (int i = 3; i < 20; i++)
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
  
    return 0;
}