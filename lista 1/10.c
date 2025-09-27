#include <stdio.h>
#include <stdlib.h>

int main() {
    float cotacao, reais, dolares;

    printf("Digite a cotacao do dolar: ");
    scanf("%f", &cotacao);

    printf("Digite o valor em reais que deseja converter: ");
    scanf("%f", &reais);

    dolares = reais / cotacao;

    printf("Valor em dolares: %.2f\n", dolares);

    return 0;
}