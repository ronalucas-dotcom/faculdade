#include <stdio.h>
#include <string.h>
#define TAM 10

int main() {
    char s[TAM];
    char t[TAM];
    int i = 0;
    int ok = 1; 

    printf("Digite a primeira string: ");
    fgets(s, TAM, stdin);
 

    printf("Digite a segunda string: ");
    fgets(t, TAM, stdin);


    while (s[i] != '\0' || t[i] != '\0') {
        if (s[i] != t[i]) {
            ok = 0;
            break;
        }
        i++;
    }

    if (ok)
        printf("As strings sao iguais.\n");
    else
        printf("As strings sao diferentes.\n");

    return 0;
}
