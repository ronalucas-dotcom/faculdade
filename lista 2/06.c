#include <stdio.h>
#include <ctype.h>

int main() {
    int cont = 0, vt1 = 0, vt2 = 0, branco = 0, nulo = 0, v;

    for (;;) { 
        puts("Qual o seu voto? 5-Paulo, 7-Renata, 0-Branco. (numero negativo encerra)");
        if (scanf("%d", &v) != 1) {
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF) {}
            puts("Entrada invalida. Tente novamente.");
            continue;
        }
        if (v < 0) break; 

        char conf;
        printf("Confirmar voto? (S/N): ");
        scanf(" %c", &conf);
        conf = (char)tolower((unsigned char)conf);
        if (conf != 's') {
            puts("Voto cancelado. Recomeçando...");
            continue; 
        }

        switch (v) {
            case 5: vt1++; break;
            case 7: vt2++; break;
            case 0: branco++; break;
            default: nulo++; break;
        }
        cont++;
    }

    if (cont == 0) {
        puts("Nenhum voto confirmado. Eleicao encerrada.");
        return 0;
    }

    double pPaulo  = (vt1    * 100.0) / cont;
    double pRenata = (vt2    * 100.0) / cont;
    double pBranco = (branco * 100.0) / cont;
    double pNulo   = (nulo   * 100.0) / cont;

    printf("Total de votos confirmados: %d\n", cont);
    printf("Paulo (5):  %d (%.2f%%)\n", vt1, pPaulo);
    printf("Renata (7): %d (%.2f%%)\n", vt2, pRenata);
    printf("Brancos:    %d (%.2f%%)\n", branco, pBranco);
    printf("Nulos:      %d (%.2f%%)\n", nulo, pNulo);

    if (vt1 > vt2) {
        puts("Eleito: Paulo (5)");
    } else if (vt2 > vt1) {
        puts("Eleita: Renata (7)");
    } else {
        puts("Empate entre Paulo (5) e Renata (7).");
    }

    return 0;
}
