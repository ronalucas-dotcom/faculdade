#include <stdio.h>
int main(){
    int i;
    unsigned long long trigo = 1,total = 0;
    for ( i = 1; i <= 64; i++)
    {
        total+= trigo;
       trigo = trigo * 2;
      
    }
    printf("o total de trigo é %llu\n",total);
    return 0;
}