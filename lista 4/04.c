#include <stdio.h>
#define TAM 5

int main(){
    int vetor[TAM];

    for ( int i = 0; i < TAM; i++)
    {
        printf("Elemento [%d]: ", i);
        scanf("%d",&vetor[i]);
    }

    for (int i = 0; i < TAM; i++)
    {
        printf("vetor[%d] = %d\tendereço : %p\n", i, vetor[i], (void*)&vetor[i]);
    }
    
    return 0;
}