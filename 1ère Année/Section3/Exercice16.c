#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float resultat = 1.;
    float ajout = 1e-9;


    printf("resultat = %.15f\n", resultat);
    printf("on ajoute %.15f\n", ajout);

    resultat = resultat + ajout;
    printf("resultat = %.15f\n", resultat);

    /* Pourquoi resultat ne change pas ? */
    /*L'approximation de 1e-9 (1 * 10^-9) lors de l'addition est trop faible, il faudrait ajouter plus que ça !*/
    exit(EXIT_SUCCESS);

}
