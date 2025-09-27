#include <stdio.h>
int main(){
    int x,y,tem,i,quant;
    puts("qual o intervalo");
    scanf("%d %d",&x,&y);
    if (y<x){
        tem = x;
        x = y;
        y = tem;

    }
    for(i = x; i <=y;i++){
        if (i%3==0){
            quant++;

        }
    }
    printf("quantidade de n ́umeros divisiveis por 3 pertencentes a faixa é:%d",quant);

    return 0;
}