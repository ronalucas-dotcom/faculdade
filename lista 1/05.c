#include <stdio.h>
#include <stdlib.h>

int main(){
    puts("informe a altura");
    float x;
    
    scanf("%f",&x);
 puts("qual o sexo");
 char s;
 scanf("%s",&s);

 switch (s)
 {
 case 'h':
    printf("o pesso ideal e %.2f", (72.2*x) - 58);
    break;
 case 'm':
    printf("o pesso ideal e %.2f", (62.1 *x) - 44.7);
    break;
 default:
    printf("Opção inválida!\n");

 }




    return 0;


}