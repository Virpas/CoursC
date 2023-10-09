#include <stdio.h>
#include <stdlib.h>
/*J'ai espacé le programme et mis printf et scanf sur la même ligne, j'ai également passé "ajout" en long*/

int main(int argc, char const *argv[])
{
    long big = 0;
    long ajout;

    printf("big vaut %ld, faîtes le grossir : ", big); scanf("%ld", &ajout);

    big = ajout + big;
    printf("big vaut maintenant %ld !\n", big);

    exit(EXIT_SUCCESS);

}
