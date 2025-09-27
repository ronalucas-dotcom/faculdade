#include <stdio.h>
#include <stdlib.h>

int main(){
int horas, minutos, segundos, total;

    printf("digite as horas: ");
    scanf("%d", &horas);

    printf("digite os minutos: ");
    scanf("%d", &minutos);

    printf("digite os segundos: ");
    scanf("%d", &segundos);

    total = horas * 3600 + minutos * 60 + segundos;

    printf("total em segundos: %d\n", total);

    return 0;
}