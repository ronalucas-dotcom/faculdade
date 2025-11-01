#include <stdio.h>
#define LINHAS 3
#define COLUNAS 3

int main(){
    int matriz[LINHAS][COLUNAS];

    printf("digite os elementos da matriz \n");
    for ( int i = 0; i < LINHAS; i++)
    {
        for ( int j = 0; j < COLUNAS; j++)
        {
            printf("linha %d coluna %d :", i,j);
            scanf("%d",&matriz[i][j]);
        }
        
    }
    
    puts("matriz impresa");
    for (int i = 0; i < LINHAS; i++)
    {
        for ( int j = 0; j < COLUNAS; j++)
        {
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }
    printf("os elementors a diagonal são, %d ,%d ,%d",matriz[0][0],matriz[1][1],matriz[2][2]);
    return 0;
}