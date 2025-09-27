#include <stdio.h>

int main() {
    int i, resultado, base = 3;

    for (i = 0; i <= 7; i++) {
        resultado = 1;              
        for (int j = 0; j < i; j++) {
            resultado *= base;      
        }
        printf("3^%d = %d\n", i, resultado);
    }

    return 0;
}
