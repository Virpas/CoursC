#include <stdio.h>
#include <stdlib.h>


int main() {

    /*Déclaration*/
    double reel;

    printf("Saississez un nombre reel : ");
    scanf("%lf", &reel);
    printf("%lf\n", reel); /*NB: un nombre dépassant ce qui est supporté par un double sera mal affiché voir corrompu */

    exit(EXIT_SUCCESS);
}