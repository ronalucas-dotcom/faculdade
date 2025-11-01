#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#define TAM 100

int main(){
    int vetor[TAM];
    int aux;
    int x,y;

    puts("digite o intervalo");
    scanf("%d %d",&x , &y);

    srand(time(NULL));
    for (int i = 0; i < TAM; i++)
    {
        vetor[i] = x + rand() % (y - x+ 1);
    }

    for (int i = 0; i < TAM - 1 -i ; i++)
    {
        for (int j = 0; j < TAM - i; j++)
        {
           if (vetor[j] > vetor[j+1])
           {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
           }
           
        }
        
    }

    printf("\nVetor ordenado (Bubble Sort):\n");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");



 return 0;
}
    
    