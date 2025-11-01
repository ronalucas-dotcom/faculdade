#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LINHAS 3
#define COLUNAS 3
#define RG 10

int main(){
    int matriz[LINHAS][COLUNAS];
    int x,cont = 0;

    srand(time(NULL));

    for ( int i = 0; i < LINHAS; i++)
    {
        for ( int j = 0; j < COLUNAS; j++)
        {
           matriz[i][j] = rand() % RG;
           printf("%4d",matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    puts("qual numero é para contar ?");
    scanf("%d",&x);

    for (int i = 0; i < LINHAS; i++)
    {
        for (int j = 0; j < COLUNAS; j++)
        {
           if (matriz[i][j] == x)
           {
            cont++;
           }
           
        }
        
    }

    if (cont > 0)
        printf("\nO valor %d aparece %d vez(es) na matriz.\n", x, cont);
    else
        printf("\nO valor %d nao aparece na matriz.\n", x);

    return 0;
}