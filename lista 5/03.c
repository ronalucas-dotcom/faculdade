#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
#define RG 10

void povoar_vetor(int *p, size_t tam);
void gerar_vetor(int *p,size_t tam);
int *maior_vetor(int *p, size_t tam);
int *menor_vetor(int *p,size_t tam);
void normaliza_dados(int *p, size_t tam, int *pmax, int *pmin);


int main(){
    int vetor[TAM];
    povoar_vetor(vetor,TAM);

    gerar_vetor(vetor,TAM);

    int *pmaior = maior_vetor(vetor,TAM);
    int *pmenor = menor_vetor(vetor,TAM);

    puts("\n=======");
    printf("Maior elemento: %d (endereco: %p)\n", *pmaior, (void*)pmaior);
    printf("Menor elemento: %d (endereco: %p)\n", *pmenor, (void*)pmenor);

    normaliza_dados(vetor, TAM, pmaior, pmenor);

    return 0;
}

void povoar_vetor(int *p, size_t tam){
    srand(time(NULL));
    for (size_t i = 0; i < tam; i++)
    {
        *(p+i) = rand() % RG;
    }
    
}

void gerar_vetor(int *p,size_t tam){
    for (size_t i = 0; i < tam; i++)
    {
        printf("[%p] : %d\n",(p + i),*(p + i));
    }
    
}

int *maior_vetor(int *p, size_t tam){
    int *pmaior = p;
    for (size_t i = 0; i < tam; i++)
    {
        if (*pmaior < *(p + i))
        {
            pmaior = p + i;
        }
        
    }
    return pmaior;
}

int *menor_vetor(int *p,size_t tam){
    int *pmenor = p;
    for (size_t i = 0; i < tam; i++)
    {
        if (*pmenor > *(p + i))
        {
            pmenor = p + i;
        }
        
    }
    return pmenor;
}

void normaliza_dados(int *p, size_t tam, int *pmax, int *pmin){
    for (unsigned long i = 0; i < tam; i++) {
    float norm = ((float)p[i] - *pmin) / (*pmax - *pmin);
    printf("X'[%lu] = %.2f\n", i, norm);
    }
}

