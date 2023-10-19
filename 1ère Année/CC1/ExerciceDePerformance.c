#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[]){;
    unsigned int n;

    printf("Rentrez la valeur de n: "); scanf("%u", &n);
    printf ("%.0Lf\n", (long double)((1.0/sqrtl(5.0))    *  (powl((1.0+sqrtl(5.0))/2.0, n)    +    powl((1.0-sqrtl(5.0))/2.0, n))));
    exit(EXIT_SUCCESS);
}
