#include <stdio.h>

int main(void) {
    int tempo, horas, minutos, segundos;

    printf("Digite o tempo em segundos: ");
    scanf("%d", &tempo);

    horas = tempo / 3600;              
    minutos = (tempo % 3600) / 60;     
    segundos = tempo % 60;             
    
    printf("%d segundos = %d hora(s), %d minuto(s) e %d segundo(s)\n",
           tempo, horas, minutos, segundos);

    return 0;
}