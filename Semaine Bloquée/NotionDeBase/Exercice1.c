#include <stdio.h>    // Pour les entrées/sorties standard (printf, scanf, etc.)
#include <stdlib.h>   // Pour les fonctions utilitaires générales (malloc, free, atoi, etc.)
#include <string.h>   // Pour les fonctions de manipulation de chaînes (strcpy, strcmp, etc.)
#include <math.h>     // Pour les fonctions mathématiques (sin, cos, sqrt, etc.)
#include <ctype.h>    // Pour les fonctions de manipulation de caractères (toupper, isdigit, etc.)
#include <time.h>     // Pour les fonctions de manipulation du temps (time, localtime, etc.)
#include <limits.h>   // Pour les constantes définissant les limites des types de données
#include <float.h>    // Pour les constantes définissant les limites des types de données à virgule flottante

/**
 * Écrire le programme table.c qui lit un entier (scanf()) et qui affiche (printf()) sa table de multiplication.
*/

int main(){
    int tableChoisi;
    printf("Vous voulez la table de combien ?");
    scanf("%d" , &tableChoisi);


    for (size_t i = 0; i <= 10; i++)
    {
        int resultat = i * tableChoisi;
        printf("%zu * %d = %d\n", i, tableChoisi , resultat);
    }
    


    return 0;
}