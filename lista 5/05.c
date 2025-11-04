#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void povoar_vetor(int *p, size_t tam);
void gerar_vetor(int *p,size_t tam);
float media_vetor(int *p,size_t tam);
float mediana_vetor(int *p, size_t tam);
int moda_vetor(int *p, size_t tam);


#define TAM 10
#define RG 10

int main(){
    int vetor[TAM];

    povoar_vetor(vetor, TAM);
    gerar_vetor(vetor, TAM);

    float media = media_vetor(vetor, TAM);
    float mediana = mediana_vetor(vetor, TAM);
    int moda = moda_vetor(vetor, TAM);

    printf("\nMédia: %.2f\n", media);
    printf("Mediana: %.2f\n", mediana);
    printf("Moda: %d\n", moda);

    return 0;
}

void povoar_vetor(int *p, size_t tam){
    srand(time(NULL));
    for (size_t i = 0; i < tam; i++)
    {
        *(p + i) = rand() % RG;
    }
    
}

void gerar_vetor(int *p,size_t tam){
    for (size_t i = 0; i < tam; i++)
    {
        printf("[%p] : %d\n",p + i,*(p + i));
    }
}

float media_vetor(int *p,size_t tam){
    int soma = 0;
    for (size_t i = 0; i < tam; i++)
    {
        soma += p[i];
    }
 return (float)soma / tam;
}

float mediana_vetor(int *p, size_t tam) {
    int copia[TAM];
    for (size_t i = 0; i < tam; i++) {
        copia[i] = p[i];
    }

    for (size_t i = 0; i < tam - 1; i++) {
        for (size_t j = i + 1; j < tam; j++) {
            if (copia[i] > copia[j]) {
                int temp = copia[i];
                copia[i] = copia[j];
                copia[j] = temp;
            }
        }
    }

    if (tam % 2 == 0)
        return (copia[tam/2 - 1] + copia[tam/2]) / 2.0;
    else
        return copia[tam/2];
}

int moda_vetor(int *p, size_t tam) {
    int moda = p[0];
    int maxFreq = 1;

    for (size_t i = 0; i < tam; i++) {
        int freq = 1;
        for (size_t j = i + 1; j < tam; j++) {
            if (p[i] == p[j])
                freq++;
        }
        if (freq > maxFreq) {
            maxFreq = freq;
            moda = p[i];
        }
    }
    return moda;
}