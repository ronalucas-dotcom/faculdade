#include <stdio.h>
#include <string.h>
#define TAM 50

int main() {
    char s[TAM];
    char t[TAM];

    printf("Digite a primeira string: ");
    fgets(s, TAM, stdin);
    s[strcspn(s, "\n")] = '\0'; 

    printf("Digite a segunda string: ");
    fgets(t, TAM, stdin);
    t[strcspn(t, "\n")] = '\0';  

    strcat(s, t);  

    printf("\nResultado da concatenacao: ");
    puts(s);

    return 0;
}