#include <stdio.h>    // Pour les entrées/sorties standard (printf, scanf, etc.)
#include <stdlib.h>   // Pour les fonctions utilitaires générales (malloc, free, atoi, etc.)
#include <string.h>   // Pour les fonctions de manipulation de chaînes (strcpy, strcmp, etc.)
#include <math.h>     // Pour les fonctions mathématiques (sin, cos, sqrt, etc.)
#include <ctype.h>    // Pour les fonctions de manipulation de caractères (toupper, isdigit, etc.)
#include <time.h>     // Pour les fonctions de manipulation du temps (time, localtime, etc.)
#include <limits.h>   // Pour les constantes définissant les limites des types de données
#include <float.h>    // Pour les constantes définissant les limites des types de données à virgule flottante

/**
 * Inversion de chaîne de caractères
 */

#define BUFFER_LEN 64

int main(void)
{
    char orig[BUFFER_LEN] = "bonjour";
    // = {0}; is the universal zero initializer, C99 Standard 6.7.8.21
    char mirror[BUFFER_LEN] = {0};  // fill buffer with 0 (a.k.a. '\0')
    
    size_t longueurOriginal = strlen(orig); 

    printf("Voici la chaine original : \n");
    for (size_t i = 0; i < longueurOriginal; i++)
    {
        printf("%c" , orig[i]);
    }
    printf("\n");

    printf("Voici la chaine mirror inversée : \n");
    for (size_t i = 0; i < longueurOriginal; i++)
    {
        mirror[i] = orig[longueurOriginal - 1 - i];
        printf("%c" , mirror[i]);
    }
    printf("\n");
        
    return EXIT_SUCCESS;
}