#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 10
#define RG 20

int main(){
    int v[TAM];
    int *pv = v;
    int aux;

    srand(time(NULL));
    for (int i=0; i<TAM; i++){
        *(pv+i) = rand() % RG;
    }

    for (int i = 0; i < TAM - 1; i++)
    {
        for ( int j = 0; j < TAM - 1 - i; j++)
        {
            if (*(pv+j) > *(pv + j + 1))
            {
                aux = *(pv+j);
                *(pv + j) = *(pv + j + 1);
                *(pv + j + 1) = aux;
            }
            
        }
        
    }

    for (int i = 0; i < TAM; i++)
    {
        printf("%2d ",*(pv + i));
    }
    printf("\n");

    return 0;
}
