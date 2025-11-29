#include <stdio.h>

struct aluno
{
    int n1;
    int n2;
    int media;
};



int main(){
    struct aluno al;

    printf("digite a primeira nota do aluno: ");
    scanf("%d",&al.n1);

    printf("digite a segunda nota: ");
    scanf("%d",&al.n2);

    al.media = (al.n1 + al.n2)/2;

    printf("a media do aluno foi de %d",al.media);
    

    return 0;
}
