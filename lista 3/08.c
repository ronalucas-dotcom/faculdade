#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#define TAM 100

int main(){
    int vetor[TAM];
    int min,aux;
    int x,y;

    puts("digite o intervalo");
    scanf("%d %d",&x , &y);

    srand(time(NULL));
    for (int i = 0; i < TAM; i++)
    {
       vetor[i] = x + rand() % (y- x + 1);

    }

    for (int i = 0; i < TAM - 1; i++)
    {
        min = i;
        for (int j = i +1 ; j < TAM; j++)
        {
            if (vetor[j]<vetor[min])
            {
                min = j;
            }
            
        }
        if (min != 1)
        {
            aux = vetor[i];
            vetor[i] = vetor[min];
            vetor[min] = aux;

        }
        
    }
    
    printf("\nVetor ordenado (Selection Sort):\n");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}