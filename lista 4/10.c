#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10
#define RG 9

int main(){
    int X[TAM];
    int F[TAM] = {0};
    int *pX = X;
    int *pF = F;

    srand(time(NULL));
    printf("vetor X =");

    for (int i = 0; i < TAM; i++)
    {
        *(pX + i) = rand() % RG;
        printf("%3d",*(pX+i));
    }

    for (int i = 0; i < TAM; i++)
    {
        (*(pF + *(pX + i)))++;
    }

    printf("\n\nVetor F (frequencia de cada elemento):\n");
    for (int i = 0; i < TAM; i++) {
        printf("F[%d] = %d\n", i, *(pF + i));
    }
    
    return 0;
}

