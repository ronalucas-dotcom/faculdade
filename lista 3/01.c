#include <stdio.h>

#define TAM 15

int main(){
    float vetor[TAM];
    int i;
    float maior, menor, soma;
    for ( i = 0; i < TAM; i++)
    {
        printf("digite o numero da posição %d :\n",i);
        scanf("%f",&vetor[i]);
    }

    maior = menor = vetor[0];

    for ( i = 0; i < TAM; i++)
    {
        if (vetor[i]< menor){
            menor = vetor[i];
        }

        if (vetor[i] > maior){
            maior = vetor[i];
        }

    }

    soma = maior + menor;
    printf(" a soma é %.2f",soma);

    return 0;
}