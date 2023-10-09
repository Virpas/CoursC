import studio           /* il faut écrire "#include <stdio>"*/
def main :          /*def n'existe pas, ecrivez plutot: "int main(){}"  */
pi <- 3,14          /*Il faut déclarer et assigné une variable, 3.14 est un nombre flottant donc utilisez plutot: "float pi = 3.14e0"*/
print(pi)           /*Avec le "#include <stdio>", vous pouvez faire printf("%f", pi) qui affichera pi.*/
# Pourquoi ça n'affiche pas pi ???'   /*Pour mettre un commentaire, il faut l'encadrer comme cette phrase l'est*/
exit()          /*exit() n'existe pas en C, ecrivez exit(EXIT_SUCCESS) ou alors return(0)*/

/* VOICI LE CODE FONCTIONNEL:

#include <stdio>

int main(){


    float pi = 3.14e0;              ==> e0 signifie *10^0
    printf("%e", pi);               ==> %e affiche en notation scientifique


    exit(EXIT_SUCCESS);
}
*/
