#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    /*Déclaration*/
    int n1NombreSaisi;
    int n2NombreSaisi;
    int additionNombresSaisis;
    int soustractionNombres1ParNombre2;
    int multiplicationNombreSaisis;

    /*Calculs*/
    printf("Saississez la valeur du premier nombre réel: "); scanf("%d", &n1NombreSaisi); printf("Le premier nombre vaut %d !\n\n", n1NombreSaisi);
    printf("Saississez la valeur du second nombre réel: "); scanf("%d", &n2NombreSaisi); printf("Le second nombre vaut %d !\n\n", n2NombreSaisi);

    additionNombresSaisis = n1NombreSaisi + n2NombreSaisi;
    soustractionNombres1ParNombre2 = n1NombreSaisi - n2NombreSaisi;
    multiplicationNombreSaisis = n1NombreSaisi * n2NombreSaisi;

    printf("L'addition du nombre 1 et du nombre 2 fait: %d !\n", additionNombresSaisis);
    printf("La soustraction du nombre 1 par le nombre 2 fait: %d!\n", soustractionNombres1ParNombre2);
    printf("La multiplication du nombre 1 et du nombre 2 fait: %d!\n", multiplicationNombreSaisis);

    exit(EXIT_SUCCESS);
}
