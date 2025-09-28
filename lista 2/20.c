#include <stdio.h>

int main(){
    int i,f,fat;
    for ( i = 1; i < 10; i++)
    {   
        fat = 1;
        if (i % 2 !=0){
            for ( f = 1; f <= i; f++)
    {
        fat = fat*f;
    }
    printf("o fatorial do %d é %d\n",i,fat);
        }
    }

    return 0;
}