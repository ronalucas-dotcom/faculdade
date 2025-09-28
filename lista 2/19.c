#include <stdio.h>

int main(){
    int x,y,i,som=0,cont=0;
    float media;
    puts("digite o intervalo");
    scanf("%d %d",&x,&y);
    if (x>y){
        puts("intervalo invalido");
    }
    else{
    for ( i = x; i <= y; i++)
    {
        som+= i;
        cont++;
        
    }
   
    media = (float)som/cont;
    printf("a media é %.1f",media);
    }
    return 0;
}  