#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ARQ "usuarios.csv"
#define TAM_STR 100

void lerString(char *s, int tam);

int main(void) {
    FILE *fp;
    int n, i;

    fp = fopen(ARQ, "w");  
    if (fp == NULL) {
        printf("Erro ao abrir o arquivo %s\n", ARQ);
        return 1;
    }

    fprintf(fp, "id,nome,idade,email\n");

    printf("Quantos usuarios deseja cadastrar? ");
    scanf("%d", &n);

    getchar();

    for (i = 0; i < n; i++) {
        int id, idade;
        char nome[TAM_STR];
        char email[TAM_STR];

        printf("\n--- Usuario %d ---\n", i + 1);

        printf("ID: ");
        scanf("%d", &id);
        getchar(); 

        printf("Nome: ");
        lerString(nome, TAM_STR);

        printf("Idade: ");
        scanf("%d", &idade);
        getchar();  

        printf("Email: ");
        lerString(email, TAM_STR);

        fprintf(fp, "%d,%s,%d,%s\n", id, nome, idade, email);
    }

    fclose(fp);

    printf("\nDados gravados em %s com sucesso!\n", ARQ);

    return 0;
}

void lerString(char *s, int tam) {
    if (fgets(s, tam, stdin) != NULL) {
        s[strcspn(s, "\n")] = '\0'; 
    }
}