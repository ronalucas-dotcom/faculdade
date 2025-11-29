#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct alunos
{
    int notas[3];
    float media;

};

void popularvetor(struct alunos *p);

int main(){
    struct alunos al;
    srand(time(NULL));

    popularvetor(&al);

    return 0;
}

void popularvetor(struct alunos *p){
    float soma = 0;
    for ( int i = 0; i < 3; i++)
    {
       p -> notas[i] = rand() % 10;
        printf("%3d", p -> notas[i]);
        soma += p-> notas[i];
    }

    p -> media = soma/3;

    printf(" a media foi:%.2f\n",p->media);



}
