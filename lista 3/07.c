#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define TAM 3
#define RG 20

int main(){
    int vetor[TAM];
    int soma = 0;
    double mediaA,mediaG,p = 1.0;

    srand(time(NULL));
    for (int i = 0; i < TAM; i++)
    {
        vetor[i] = rand() % RG;
    }

    puts("vetor gerado");
    for (int i = 0; i < TAM; i++)
    {
        printf("%d \n",vetor[i]);
        soma += vetor[i];
        p *= vetor[i];

    }
    
    mediaA = (double)soma / TAM;
    mediaG = pow(p, 1.0/TAM);

    printf("\nMedia aritmetica: %.2f\n", mediaA);
    printf("Media geometrica: %.2f\n", mediaG);

    return 0;
}