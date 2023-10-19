#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float valeurInt;
    int valeurFloat;

    printf("Rentrez la valeur de l'entier à encoder: "); scanf("%d", &valeurInt);
    printf("%.8e\n", valeurInt);
    printf("Rentrez la valeur du flottant à encoder: "); scanf("%f", &valeurFloat);
    printf("%d\n", valeurFloat);

    exit(EXIT_SUCCESS);
}
/*Il faut mettre une valeur int dans une variable float  ET  mettre une valeur float dans un variable int. Après ça, gérer l'imprécision
grace au ".8" devant le e du %e ce qui augmente la précision.
Les printf avant les scanf permettent une meilleur expérience utilisateur.*/