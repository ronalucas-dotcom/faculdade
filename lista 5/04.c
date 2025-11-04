#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
#define RG 10

void povar_vetor(float *p,size_t tam);
void gerar_vetor(float *p, size_t tam);
void soma_vetor(float *p, size_t tam, float *soma);

int main(){
    float vetor[TAM];
    float resultado;

    povar_vetor(vetor,TAM);
    gerar_vetor(vetor,TAM);

    soma_vetor(vetor,TAM, &resultado);

    return 0;
}

 void povar_vetor(float *p,size_t tam){
    srand(time(NULL));
    for (size_t i = 0; i < tam; i++)
    {
        *(p + i) = ((float)rand() / RAND_MAX) * RG;
    }
    
 }

 void gerar_vetor(float *p, size_t tam){
    for (size_t i = 0; i < tam; i++)
    {
        printf("[%p] : %.2f\n",(p+i),*(p+i));
    }
    
 }

 void soma_vetor(float *p, size_t tam, float *soma){
    *soma = 0;
    for (size_t i = 0; i < tam; i++)
    {
        *soma += p[i];
    }
    printf("soma foi %.2f",*soma);
 }