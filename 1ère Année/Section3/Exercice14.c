#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

                    /*Ajout des parenthèse, tout fonctionne.*/

    int x = 0;
    int y;
    y = ((x-1)*(x-1)) / (x+1); 

    printf("f(%d) = %d\n", x, y);


    x = 1;
    y = ((x - 1) * (x - 1)) / (x + 1);

    printf("f(%d) = %d\n", x, y);


    x = 3;
    y = ((x - 1) * (x - 1)) / (x + 1);

    printf("f(%d) = %d\n", x, y);


    exit(EXIT_SUCCESS);

}
