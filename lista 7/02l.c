#include <stdio.h>
#include <stdlib.h>
#define TAM 50

struct estoque
{
    char nome[TAM];
    int peca;
    float preco;
    int pedido;
};


int main(){
    struct estoque mec;
    mec.pedido = 1;

    while (1)
    {
         printf("\nDigite o número da peça (0 para sair): ");
        scanf("%d", &mec.peca);

        if (mec.peca == 0) {
            printf("Saindo...\n");
            break;
        }

        getchar();

        printf("Digite o nome da peça: ");
        fgets(mec.nome, TAM, stdin);

        printf("Digite o preço da peça: ");
        scanf("%f", &mec.preco);

        printf("\n===== PEDIDO %d =====\n", mec.pedido);
        printf("PEÇA:  %s", mec.nome);
        printf("NUMERO: %d\n", mec.peca);
        printf("PREÇO: %.2f\n", mec.preco);
        printf("=====================\n");

        mec.pedido++;

    }
    
    return 0;
}