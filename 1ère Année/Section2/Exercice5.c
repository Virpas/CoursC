#include <stdio.h>
#include <stdlib.h>

int main(){
    /*Déclaration*/
    float reel = 13.37;
    char caractere = 'Z';
    long long int entier = 42000000000; /* int entier = 42000000000; ==> le chiffre est trop grand, deux possibilité: utilisé
                                 unsigned long int ou utilisé long long int*/

    /*Affichage*/
    printf("%f\n", reel);
    printf("%c\n", caractere);
    printf("%lld\n", entier);
    printf("%llx\n", entier);

    exit(EXIT_SUCCESS);
}