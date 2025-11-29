#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct notas
{
    int *p;
    int tam;
    float media;
};


int main(){
    struct notas note;

    note.media = 0;

    srand(time(NULL));


    printf("quantas notas: ");
    scanf("%d",&note.tam);

    note.p = malloc(note.tam*sizeof(int));

   for (int i = 0; i < note.tam; i++)
   {
      *(note.p + i) = rand() % 10;
      printf("%3d ",*(note.p + i));
   }

   for (int i = 0; i < note.tam; i++)
   {
      note.media += *(note.p + i); 
   }

   note.media = note.media/note.tam;

   printf("a media foi de %.2f",note.media);

   free(note.p);
   
    return 0;
}