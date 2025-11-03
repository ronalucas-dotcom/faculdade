#include <stdio.h>
#include <string.h>
#define TAM 10

int main(){
    char s[TAM];
    char *ps = s;
    char x;
    int encontrado = 0;

    printf("digite a string: ");
    fgets(s,TAM,stdin);
    s[strcspn(s, "\n")] = '\0';

    printf("digite o carac: ");
    scanf("%c",&x);

    while (*ps != '\0')
    {
        if (*ps == x)
        {
            encontrado = 1;
            break;
        }
        ps++;
    }
    
    if (encontrado)
    {
        printf("\nO caractere '%c' foi encontrado na string \"%s\".\n", x, s);
    }
    
    else{
        printf("\nO caractere '%c' NAO foi encontrado na string \"%s\".\n", x, s);
    }


    return 0;
}