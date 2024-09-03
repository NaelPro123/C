#include <stdio.h>    // Pour les entrées/sorties standard (printf, scanf, etc.)
#include <stdlib.h>   // Pour les fonctions utilitaires générales (malloc, free, atoi, etc.)
#include <string.h>   // Pour les fonctions de manipulation de chaînes (strcpy, strcmp, etc.)
#include <math.h>     // Pour les fonctions mathématiques (sin, cos, sqrt, etc.)
#include <ctype.h>    // Pour les fonctions de manipulation de caractères (toupper, isdigit, etc.)
#include <time.h>     // Pour les fonctions de manipulation du temps (time, localtime, etc.)
#include <limits.h>   // Pour les constantes définissant les limites des types de données
#include <float.h>    // Pour les constantes définissant les limites des types de données à virgule flottante
/**
 * Exercice 2 - Duplication d'une chaîne de caractères
 * La fonction copier_chaine() duplique en mémoire la chaîne de caractères passée en paramètre et 
 * retourne l'adresse de la nouvelle chaîne de caractères ou NULL en cas d'échec. La copie est créée dynamiquement. 
 * On rappelle qu'en C, une chaîne de caractères se termine par le caractère nul '\0' comme sentinelle identifiant 
 * la fin de la chaîne. En conséquent, une chaîne de n caractères occupe n + 1 octets en mémoire.
 */


char* copier_chaine(char* str){
    char* newStr;
    if (strlen(str) < 1)
    {
        return NULL;
    }else{        
        newStr = (char*)malloc((strlen(str)+1) * sizeof(char)); // Allouer un espace egale a la chaine de base dans newStr
        strncpy(newStr, str, strlen(str)+1);    //copier toute la chaine directement
        

    }

    return newStr;
    
}


int main(void){
    char* str = "Ma super chaine a copiée";
    char* copie = copier_chaine(str);

    printf("Chaine principale [%s] ainsi que son adresse %p\n", str, &str);
    printf("Copie réussie: [%s] ainsi que son adresse %p\n", copie, &copie);
    free(copie); //libérer la mémoire allouée avec free() Voir cours

    return 0;

}