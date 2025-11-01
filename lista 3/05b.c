#include <stdio.h>
#include <string.h>
#define TAM 50

int main(){
    char s[TAM];
    char t[TAM];
    int i = 0, j = 0;

    printf("digite a primeira string");
    fgets(s,TAM,stdin);
    s[strcspn(s, "\n")] = '\0';

    printf("digite o segundo string");
    fgets(t,TAM,stdin);
    t[strcspn(t, "\n")] = '\0';

    while (s[i] != '\0') {
        i++;
    }

   
    while (t[j] != '\0' && i < TAM - 1) {
        s[i] = t[j];
        i++;
        j++;
    }

    s[i] = '\0'; 

    printf("\nResultado da concatenacao: %s\n", s);

    return 0;
}
