#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define RG 10

float ERRO_MEDIO_QUADRADO(float *px, float *py, int tam);
float ERRO_ABSOLUTO_MEDIO(float *px, float *py, int tam);
float calculaErro(float *px, float *py, int tam,float (*func)(float *, float *, int))
{
    return func(px, py, tam);
}

int main(int argc, char *argv[])
{

    float (*op[2])(float *, float *, int) = {ERRO_MEDIO_QUADRADO, ERRO_ABSOLUTO_MEDIO};


    if (argc != 2){
        printf("Use: \n\t\t %s <dimensao>\n\n",*argv);
        exit(1);
    }

    int N = atoi(argv[1]);
    if (N <= 0) {
        printf("Dimensao invalida.\n");
        exit(1);
    }


    float *px;
    float *py;

    px = malloc(N * sizeof(float));
    py = malloc(N * sizeof(float));

    srand((unsigned) time(NULL));

    for (int i = 0; i < N; i++)
    {
        *(px + i) = rand() % RG;
        *(py + i) = rand() % RG;
    }

    int medio;

    printf("0 - erro medio quadrado\n1 - erro absoluto medio\n: ");
    scanf("%d",&medio);

    if (medio < 0 || medio > 1) {
        printf("Opcao invalida.\n");
        free(px);
        free(py);
        exit(1);
    }

    float r = calculaErro(px, py, N, op[medio]);

    printf(" o erro foi: %.2f",r);

    free(px);
    free(py);


    return 0;
}

float ERRO_MEDIO_QUADRADO(float *px, float *py, int tam){
     double soma = 0.0;

    for (int i = 0; i < tam; i++) {
        double erro = *(px+i) - *(py +i);
        soma += erro * erro;   // (A[i] - B[i])²
    }

    return soma / tam;
}

float ERRO_ABSOLUTO_MEDIO(float *px, float *py, int tam){
    double soma = 0.0;

    for (int i = 0; i < tam; i++) {
        soma += fabs(*(px + i) - *(py + i));  // fabs = valor absoluto para double
    }

    return soma / tam;
}

