#include <stdio.h>

int main(){
    int x;
     puts("digite o numero");
     scanf("%d",&x);

        switch (x)
     {
     case 1:
        puts("é domingo");
        break;
    
     case 2:
        puts("é segunda");
        break;
     case 3:
        puts("é terça");
        break;
     case 4:
        puts("é quarta");
        break;
     case 5:
        puts("é quinta");
        break;
     case 6:
        puts("é sexta");
        break;
     case 7:
        puts("é sabado");
        break;
     default:
     puts("erro");
     }

    return 0;
}