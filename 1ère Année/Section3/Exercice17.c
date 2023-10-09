#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    const int p = 428404239;
    const int k = 2015201261;
    int messageCode;
    int messageDecode;

    printf("Entrez le message codé: "); scanf("%x", &messageCode); printf("Le message codé est : %x !\n", messageCode);

    messageDecode = (messageCode*k)%p;
    printf("Message décodé: %d", messageDecode);
    exit(EXIT_SUCCESS);
}
