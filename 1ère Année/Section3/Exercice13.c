#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    
    int a, b;
    /* TODO : demander des valeurs pour a et b */
    printf("Veuillez saisir une valeur pour a: "); scanf("%d", &a); printf("a vaut %d!\n\n", a);
    printf("Veuillez saisir une valeur pour b: "); scanf("%d", &b); printf("b vaut %d!\n\n", b);

    /* TODO : afficher l'addition de a et b */
    printf("L'addiction de a et b vaut : %d!\n", a+b);

    /* TODO : échanger les valeurs de a et de b */
    a = a+b;
    b = a-b;
    a = a-b;

    /* TODO : afficher la soustraction de a et b */
    printf("La soustraction de a par b après avoir échangez les valeurs est: %d\n", a-b);

    long c;
    /* TODO : affecter à c le résultat de la multiplication de a et b */
    c = a*b;

    float d;
    /* TODO : affecter à d le résultat de la division fractionnaire de a et b */
    d = a/b;

    exit(EXIT_SUCCESS);
}
