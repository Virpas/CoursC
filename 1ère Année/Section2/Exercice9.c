#include <stdio.h>
#include <stdlib.h>

int main(){
    /*Déclaration*/
    unsigned long long gros_nombre; /*Pour utilisé des nombres positif seulement, il faut utilisé "unsigned int", le plus gros type*/
                    /*Possible est ainsi "unsigned long long". le maximum est ainsi: 18 446 744 073 709 551 615*/
                   /*Soit environ 2^64 – 1*/
    printf("Entrez un gros nombre : "); 
    scanf("%llu", &gros_nombre);
    printf("%llu, un gros nombre ?\n", gros_nombre);

    gros_nombre = 999999999999999999ull;

    printf("%llu, un gros nombre !\n",gros_nombre);

    exit(EXIT_SUCCESS);
}