#include <stdio.h>
#define TAM 10

int main(){
    int vetor[TAM];
    int *pv = vetor;

    for ( int i = 0; i < TAM; i++)
    {
        printf("elemento da posição [%d] : ",i);
        scanf("%d",(pv + i));
    }

    for (int i = 0; i < TAM; i++)
    {
        if (*(pv + i) % 2 == 0)
        {
            printf("o elento %d tem endereço : [%p]",*(pv +i),(pv + i));
            break;
        }
        
    }
    
    printf("\nNenhum elemento par foi encontrado.\n");
    
    return 0;
}