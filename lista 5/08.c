#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LINHA 3
#define COLUNA 3
#define RG 10

void gerar_matriz(int (*p)[COLUNA]);
void diagonal_paridade(int (*p)[COLUNA]);

int main(){
    int matriz[LINHA][COLUNA];
    srand(time(NULL));

    gerar_matriz(matriz);
    diagonal_paridade(matriz);

    return 0;
}

void gerar_matriz(int (*p)[COLUNA]){
    for (size_t i = 0; i < LINHA; i++)
    {
        for (size_t j = 0; j < COLUNA; j++)
        {
            *(*(p+i)+j) = rand() % RG;
            printf("%2d",*(*(p + i) + j));
        }
        printf("\n");
    }
    
}

void diagonal_paridade(int (*p)[COLUNA]){
    int soma = 0;

    for (size_t i = 0; i < COLUNA; i++)
    {
            soma += *(*(p + i) + i);
    }

    printf("a soma foi %d\n", soma);

    if (soma % 2 == 0)
    {
        printf("a soma da diagonal é par");
    }
    else{
        printf("a soma da diagonal da matriz é impar");
    }
    
}