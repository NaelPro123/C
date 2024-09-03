#include <stdio.h>    // Pour les entrées/sorties standard (printf, scanf, etc.)
#include <stdlib.h>   // Pour les fonctions utilitaires générales (malloc, free, atoi, etc.)
#include <string.h>   // Pour les fonctions de manipulation de chaînes (strcpy, strcmp, etc.)
#include <math.h>     // Pour les fonctions mathématiques (sin, cos, sqrt, etc.)
#include <ctype.h>    // Pour les fonctions de manipulation de caractères (toupper, isdigit, etc.)
#include <time.h>     // Pour les fonctions de manipulation du temps (time, localtime, etc.)
#include <limits.h>   // Pour les constantes définissant les limites des types de données
#include <float.h>    // Pour les constantes définissant les limites des types de données à virgule flottante
/*
* Compléter le programme produit.c qui demande de saisir deux entiers (à l'aide de scanf()) 
* et qui affiche (à l'aide de printf()) le produit des deux entiers saisis.
*/


int main(void)
{
    /* à compléter: corps de main */
    unsigned int premierNombre;
    unsigned int deuxiemeNombre;
    unsigned int resultat;
    printf("Saisir un premier nombre : ");
    scanf("%d" , &premierNombre);

    printf("Saisir un deuxieme nombre : ");
    scanf("%d" , &deuxiemeNombre);
    resultat = premierNombre * deuxiemeNombre;

    printf("%d x %d = %d" , premierNombre, deuxiemeNombre , resultat);

    return EXIT_SUCCESS;
}

