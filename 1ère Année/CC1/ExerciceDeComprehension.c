#include <stdio.h>
#include <stdlib.h>

int main(){

    char c;
    int key;

    printf("Entrez une clé : ");
    scanf("%d", &key);

    printf("Entrez un caractère : ");
    scanf(" %c", &c);

    int a = key % 100; /*0 virgule les deux dernier nombre de la clef*/
    int b = key / 100; /*la clef avec la virgule décaler de 2 a gauche*/

    c = (c + a) * b;

    printf("\ncode : %u\n", c);

    c = (c / b) - a;
    printf("decode = %c\n", c);

    
    exit(EXIT_SUCCESS);
}

/*
1) La clef 42 ne fonctionne pas car c'est un nombre plus petit que 100, la division euclidienne par 100 donnera donc
   0 et le reste sera de 42, hors on ne peux pas diviser par 0, b ne peut donc pas valoir 0. Il faut donc choisir 
   une clef égal ou supérieur à 100 pour que ce programme fonctionne.

2) %d Lit consécutivement les nombres jusqu'à rencontrer une valeur non digital. Après le saut a la ligne,
   %d continue de lire 1 caractère (%c lisant 1 seul caractère, le scanf %c est considéré comme rempli à la lecture
   du nombre non digital), pour y remédier, on peut ajouter un espace dans le scanf comme ceci: scanf(" %c", &c);
   source: https://stackoverflow.com/questions/18425307/scanf-function-doesnt-work

3)


*/