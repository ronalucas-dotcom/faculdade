#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MX 10

void poluandoveotres( int *p , size_t tam);
void imprimirvetor(int *p, size_t tam);
void popularmatriz(int *const, const unsigned);
void imprimirmatriz(const int *const p, const unsigned lin, const unsigned col);

int main(){
    srand(time(NULL));

    int *p;
    int n;

    printf("digite o seu N :");
    scanf("%d",&n);

    int X[n];
    int Y[n];

    p = (int *) malloc(n * n * sizeof(int));
    if ( p == NULL)
    {
        printf("deu ruim");
        exit(1);
    }

    poluandoveotres(X, n);
    poluandoveotres(Y , n);
    imprimirvetor(X,n);
    printf("\n");
    imprimirvetor(Y,n);

    printf("\n\n");

    popularmatriz(p, n * n);
    imprimirmatriz(p,n,n);

    free(p);


    return 0;
}

void poluandoveotres( int *p , size_t tam){
    for (size_t i = 0; i < tam; i++)
    {
        *(p+i) = rand() % MX;
    }
    
}

void imprimirvetor(int *p, size_t tam){
    printf("vetor\n");
    for (size_t i = 0; i < tam; i++)
    {
        printf("%3d",*(p+i));
    }
    
}

void popularmatriz(int *const p, const unsigned tam){
       for (int k=0; k<tam; k++){
        *(p+k) = rand() % MX;
       }

}

void imprimirmatriz(const int *const p, const unsigned lin, const unsigned col){
    for (size_t i = 0; i < lin * col; i++)
    {
        printf("%3d", *(p+i));
        if ((i + 1) % col == 0)
        {
            printf("\n");
        }
        
    }
    

}

