#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    /*Déclaration*/
    int nombreHexadecimal = 0xfb408be9;

    /*Calculs*/
    printf("hexadécimal de 42: %X, hexadécimal de '42': %X\n", 42,"42");
    printf("if %X then %X\n", 212063991488173, 223196547513038); /* Ecrit "if FEE1DEAD then FEEDFACE"*/
    printf("if %c then %c\n", "FEE1DEAD", "FEEDFACE"); /*Ecrit "if R then I"*/
    /*  FEE1DEAD | "Feel dead", Used by Linux reboot() syscall 
        FEEDFACE |  Feed face", Seen in PowerPC Mach-O binaries on Apple Inc.'s Mac OSX platform. On Sun Microsystems' Solaris, marks the red zone (KMEM_REDZONE_PATTERN)
                    Used by VLC player and some IP cameras in RTP/RTCP protocol, VLC player sends four bytes in the order of the endianness of the system. Some IP cameras expect the player to send this magic number and do not start the stream if it is not received.*/


                    /* Ce sont des "nombres magique" (en.wikipedia.org/wiki/Magic_number_(programming)) 
                                Mais je ne comprend pas a quoi ils correspondent. */

    exit(EXIT_SUCCESS);
}
