#include <stdio.h>

int main() {
    int i;
    int soma3 = 0; 
    int soma5 = 0; 

    for (i = 0; i <= 200; i++) {
        if (i <= 100 && i % 3 == 0) {
            soma3 += i;
        }
        if (i > 100 && i % 5 == 0) {
            soma5 += i;
        }
    }

    printf("Somatorio dos divisiveis por 3 no intervalo [0,100]: %d\n", soma3);
    printf("Somatorio dos divisiveis por 5 no intervalo ]100,200]: %d\n", soma5);

    return 0;
}
