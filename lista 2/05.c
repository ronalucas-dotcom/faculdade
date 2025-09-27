#include <stdio.h>
int main(){
     int n;
    int maior, menor;
    int primeiro = 1; 

    while (1) {
        printf("Digite um numero (0 para encerrar): ");
        scanf("%d", &n);

        if (n == 0) {
            break; 
        }

        if (primeiro) {
            maior = menor = n; 
            primeiro = 0;
        } else {
            if (n > maior) {
                maior = n;
            }
            if (n < menor) {
                menor = n;
            }
        }
    }

    if (primeiro) {
        printf("Nenhum numero foi digitado.\n");
    } else {
        printf("Maior numero: %d\n", maior);
        printf("Menor numero: %d\n", menor);
    }

    return 0;
}

