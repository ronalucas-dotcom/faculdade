#include <stdio.h>

int main() {
    int x, n;

    printf("Digite o valor de x: ");
    scanf("%d", &x);

    printf("Digite o valor de n: ");
    scanf("%d", &n);


    printf("%d * 2^%d = %d\n", x, n, x << n );

    return 0;
}