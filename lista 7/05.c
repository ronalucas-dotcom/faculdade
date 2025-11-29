#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct professor
{
    char nome[30];
    int idade;
};

struct disiplina
{
    char nome_d[30];
    int qtdalunos;
    struct professor prof;
};

int main(){
    struct disiplina facul;

    printf("o nome da matria: ");
    fgets(facul.nome_d,30,stdin);
    facul.nome_d[strcspn(facul.nome_d, "\n")] = '\0';


    printf("o nome do professor: ");
    fgets(facul.prof.nome,30,stdin);

    printf(" qual a idade do professor: ");
    scanf("%d",&facul.prof.idade);

    printf(" qual a quantidade de alunos: ");
    scanf("%d",&facul.qtdalunos);

    printf("\n===== DISIPLINA: %s =====\n", facul.nome_d );
    printf("PROFESSOR:  %s", facul.prof.nome);
    printf("IDADE DO PROFESSOR: %d\n", facul.prof.idade);
    printf("QTD DE ALUNOS: %d\n", facul.qtdalunos);
    printf("=====================\n");

    return 0;
}
