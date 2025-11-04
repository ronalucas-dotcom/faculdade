#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIM 5
#define RG 10

void povar_vetores_imprimir(int *p,int *p2, size_t tam);
float erro_quadrado(int *p,int*p2,size_t tam);

int main(){
    int A[DIM];
    int B[DIM];
    srand(time(NULL));

    povar_vetores_imprimir(A,B,DIM);
    float EMQ = erro_quadrado(A,B,DIM);

    printf("ERRO MEDIO QUADRADO FOI : %.2f",EMQ);

    return 0;
}

void povar_vetores_imprimir(int *p,int *p2, size_t tam){
    printf("\nA=");
    for (size_t i = 0; i < tam; i++)
    {
        *(p + i) = rand() % RG;
        printf("[%p] : %d\n",p+i,*(p+i));
    }

    printf("\nB=");


    for (size_t i = 0; i < tam; i++)
    {
        *(p2 + i) = rand() % RG;
        printf("[%p] : %d\n",p2+i,*(p2+i));
    }


}

float erro_quadrado(int *p,int*p2,size_t tam){
    float soma = 0.0;
    for (size_t i = 0; i < tam; i++)
    {
        float erro = *(p+i) - *(p2 +i);
        soma += erro * erro;
    }
    
    return soma/tam;


}