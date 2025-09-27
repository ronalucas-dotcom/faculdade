#include <stdio.h>
#include <math.h>  

int main(void) {
    float a, b, c;
    float mediaAritmetica, mediaGeometrica;

    printf("Digite tres numeros em ponto flutuante: ");
    scanf("%f %f %f", &a, &b, &c);

    mediaAritmetica = (a + b + c) / 3.0;
    mediaGeometrica = pow(a * b * c, 1.0 / 3.0);

    printf("Media aritmetica: %.2f\n", mediaAritmetica);
    printf("Media geometrica: %.2f\n", mediaGeometrica);

    return 0;
}