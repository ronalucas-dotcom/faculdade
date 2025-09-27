#include <stdio.h>

int main() {
    float valor, entrada;
    int prestacao;

    printf("Digite o valor da mercadoria: ");
    scanf("%f", &valor);

    prestacao = (int)(valor / 3);

    entrada = valor - 2 * prestacao;

    printf("\nValor da entrada: R$ %.2f\n", entrada);
    printf("Valor de cada prestacao: R$ %d\n", prestacao);

    return 0;
}


