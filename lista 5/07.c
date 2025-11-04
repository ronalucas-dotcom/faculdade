#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LINHAS 3
#define COLUNAS 3
#define RG 10
#define LIM 4

void matriz_geracao(int (*p)[COLUNAS]);
void matriz_binaria(int (*p)[COLUNAS]);

int main(){
    int matriz[LINHAS][COLUNAS];
    srand(time(NULL));

    printf("Matriz original:\n");
    matriz_geracao(matriz);

    printf("\nMatriz binarizada:\n");
    matriz_binaria(matriz);



    return 0;
}

void matriz_geracao(int (*p)[COLUNAS]){
    for (size_t i = 0; i < LINHAS; i++)
    {
        for (size_t j = 0; j < COLUNAS; j++)
        {
            *(*(p + i) + j) = rand() % RG;
            printf("%2d",*(*(p+i) +j));
        }

        printf("\n");

    }

}

void matriz_binaria(int (*p)[COLUNAS]){
    int S[LINHAS][COLUNAS] ={0};


    for (size_t i = 0; i < LINHAS; i++)
    {
        for (size_t j = 0; j < COLUNAS; j++)
        {
            if (*(*(p + i) + j) > LIM)
            {
                S[i][j] = 1;
            }
            else{
                S[i][j] = 0;
            }
            
        }
        
    }
    for (size_t i = 0; i < LINHAS; i++)
        {
            for (size_t j = 0; j < COLUNAS; j++)
            {
                printf("%2d",S[i][j]);
            }

            printf("\n");
        }
    
}