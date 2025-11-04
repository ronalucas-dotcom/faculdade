#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
#define RG 10

void popular_vetor( int *vetor, unsigned tam);
void gerar_vetor( int *vetor, unsigned tam);
void alocar_pares(int *vetor, unsigned tam, int *out[2]);


int main(){
    int vetor[TAM];
    int *enderecos[2];

    popular_vetor(vetor,TAM);
    gerar_vetor(vetor,TAM);

    alocar_pares(vetor,TAM,enderecos);

    if (enderecos[0])
        printf("Primeiro par: %d no endereco %p\n", *enderecos[0], (void*)enderecos[0]);
    else
        puts("Nao ha elemento par (primeiro).");

    if (enderecos[1])
        printf("Ultimo  par: %d no endereco %p\n", *enderecos[1], (void*)enderecos[1]);
    else
        puts("Nao ha elemento par (ultimo).");
    return 0;
}

void popular_vetor( int *vetor, size_t tam){
    srand(time(NULL));
    for (size_t i = 0; i < tam; i++)
    {
        *(vetor + i) = rand() % RG;
    }
    
}

void gerar_vetor( int *vetor, size_t tam){
    for (size_t i = 0; i < tam ; i++)
    {
        printf("[%p]: %d\n",(vetor+i),*(vetor + i));
    }
}
void alocar_pares(int *vetor, size_t tam, int *out[2]){
    out[0] = NULL;
    out[1] = NULL;

    for (size_t i = 0; i < tam; i++) {
        if (vetor[i] % 2 == 0) { out[0] = &vetor[i]; break; }
    }

    for (size_t i = tam - 1; i-- > 0; ) {
        if (vetor[i] % 2 == 0) { out[1] = &vetor[i]; break; }
    }
}


