#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ARQ "hardware.dat"
#define MAX_REG 10

typedef struct produto
{
    char nome[50];
    int qtd;
    float preco;
    int reg;

} ferramenta;

void lerString(char *s, int tam);
void inicializarArquivo();
void inserirferramentas(FILE *p);
void listadeferramentas(FILE *p);
void excluirFerramenta(FILE *p);
void atualizarFerramenta(FILE *p);

int main(){
    int opcao;
    
    inicializarArquivo();

    FILE *fp = fopen(ARQ, "rb+");
    if (fp == NULL) {
        printf("Erro ao abrir arquivo.\n");
        return 1;
    }

    do {
        printf("\n=== MENU ===\n");
        printf("1 - Inserir ferramenta\n");
        printf("2 - Listar ferramentas\n");
        printf("3 - Excluir ferramenta\n");
        printf("4 - Atualizar ferramenta\n");
        printf("5 - Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                inserirferramentas(fp);
                break;
            case 2:
                listadeferramentas(fp);
                break;
            case 3:
                excluirFerramenta(fp);
                break;
            case 4:
                atualizarFerramenta(fp);
                break;
            case 5:
                printf("Encerrando...\n");
                break;
            default:
                printf("Opcao invalida.\n");
        }

    } while (opcao != 5);

    fclose(fp);
    return 0;

}

void lerString(char *s, int tam){
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
    fgets(s, tam, stdin);
    s[strcspn(s, "\n")] = '\0'; 
}

void inicializarArquivo(void) {
    FILE *fp = fopen(ARQ, "wb");
    if (fp == NULL) {
        printf("erro ao criar arquivo.\n");
        exit(1);
    }

    ferramenta vazio;
    vazio.reg = -1;         
    vazio.nome[0] = '\0';
    vazio.qtd = 0;
    vazio.preco = 0.0f;

    for (int i = 0; i < MAX_REG; i++) {
        fwrite(&vazio, sizeof(ferramenta), 1, fp);
    }

    fclose(fp);
}

void inserirferramentas(FILE *p){
    ferramenta f;
    int reg;

    printf("digite o numero do registro ( 0 a %d)", MAX_REG - 1);
    scanf("%d", &reg);

    fseek(p, reg * (long)sizeof(ferramenta), SEEK_SET);
    fread(&f, sizeof(ferramenta), 1, p);
    
    f.reg = reg;

    printf("Nome da ferramenta: ");
    lerString(f.nome, sizeof(f.nome));

    printf("Quantidade: ");
    scanf("%d", &f.qtd);

    printf("Preco: ");
    scanf("%f", &f.preco);

    fseek(p, reg * (long)sizeof(ferramenta), SEEK_SET);
    fwrite(&f, sizeof(ferramenta), 1, p);
    fflush(p);

    printf("Ferramenta gravada com sucesso.\n");

}

void listadeferramentas(FILE *p){
    ferramenta f;
    
    rewind(p);


    for (int i = 0; i < MAX_REG; i++) {
        fread(&f, sizeof(ferramenta), 1, p);
        if (f.reg != -1) {
            printf("Registro: %d\n", f.reg);
            printf("  Nome: %s\n", f.nome);
            printf("  Quantidade: %d\n", f.qtd);
            printf("  Preco: %.2f\n\n", f.preco);
        }
    }

}

void excluirFerramenta(FILE *p){
    ferramenta vazio;
    int reg;

    printf("Digite o numero do registro a excluir (0 a %d): ", MAX_REG - 1);
    scanf("%d", &reg);

    if (reg < 0 || reg >= MAX_REG) {
        printf("Registro invalido.\n");
        return;
    }

    vazio.reg = -1;
    vazio.nome[0] = '\0';
    vazio.qtd = 0;
    vazio.preco = 0.0f;

    fseek(p, reg * (long)sizeof(ferramenta), SEEK_SET);
    fwrite(&vazio, sizeof(ferramenta), 1, p);
    fflush(p);

    printf("Registro %d excluido.\n", reg);
}

void atualizarFerramenta(FILE *p){
    ferramenta f;
    int reg;

    printf("Digite o numero do registro a atualizar (0 a %d): ", MAX_REG - 1);
    scanf("%d", &reg);

    if (reg < 0 || reg >= MAX_REG) {
        printf("Registro invalido.\n");
        return;
    }

    fseek(p, reg * (long)sizeof(ferramenta), SEEK_SET);
    fread(&f, sizeof(ferramenta), 1, p);

    if (f.reg == -1) {
        printf("Nao existe ferramenta nesse registro.\n");
        return;
    }

    printf("Registro atual:\n");
    printf("  Nome: %s\n", f.nome);
    printf("  Quantidade: %d\n", f.qtd);
    printf("  Preco: %.2f\n\n", f.preco);

    printf("Digite os novos dados.\n");

    f.reg = reg;

    printf("Novo nome: ");
    lerString(f.nome, sizeof(f.nome));

    printf("Nova quantidade: ");
    scanf("%d", &f.qtd);

    printf("Novo preco: ");
    scanf("%f", &f.preco);

    fseek(p, reg * (long)sizeof(f), SEEK_SET);
    fwrite(&f, sizeof(ferramenta), 1, p);
    fflush(p);

    printf("Ferramenta atualizada.\n");

}
