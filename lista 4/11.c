#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10
#define RG 9

int main(){
    int M[TAM][TAM] = {0};
    int X[TAM];
    int Y[TAM];
    int *pX = X;
    int *pY = Y;

    srand(time(NULL));

    printf("VETOR X =");

    for (int i = 0; i < TAM; i++)
    {
        *(pX + i) = rand() % RG;
        printf("%3d",*(pX + i));

    }

    printf("\nVETOR Y =");

    for (int i = 0; i < TAM; i++)
    {
        *(pY + i) = rand() % RG;
        printf("%3d", *(pY + i));
    }

    for (int i = 0; i < TAM; i++)
    {
        int a = *(pX + i);
        int b = *(pY + i);
        M[a][b]++;
    }

    printf("\n\nMatriz M (coocorrencias):\n");

    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < TAM; j++)
        {
            printf("%2d",M[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}