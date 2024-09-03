#include <stdio.h>    // Pour les entrées/sorties standard (printf, scanf, etc.)
#include <stdlib.h>   // Pour les fonctions utilitaires générales (malloc, free, atoi, etc.)
#include <string.h>   // Pour les fonctions de manipulation de chaînes (strcpy, strcmp, etc.)
#include <math.h>     // Pour les fonctions mathématiques (sin, cos, sqrt, etc.)
#include <ctype.h>    // Pour les fonctions de manipulation de caractères (toupper, isdigit, etc.)
#include <time.h>     // Pour les fonctions de manipulation du temps (time, localtime, etc.)
#include <limits.h>   // Pour les constantes définissant les limites des types de données
#include <float.h>    // Pour les constantes définissant les limites des types de données à virgule flottante

/*
Somme d'un entier n en utilisant la récursivité
*/

int sum(int n) {
    if (n == 0 ) { // Cas de base
        return 0;
    }else {
        return n + sum(n - 1); // Appel récursif
    }
}

int main(){
    int nombre = 10;
    int resultat = sum(nombre);
    printf("La somme de %d est %d\n", nombre, resultat);
    return 0;
}