#include <stdio.h>    // Pour les entrées/sorties standard (printf, scanf, etc.)
#include <stdlib.h>   // Pour les fonctions utilitaires générales (malloc, free, atoi, etc.)
#include <string.h>   // Pour les fonctions de manipulation de chaînes (strcpy, strcmp, etc.)
#include <math.h>     // Pour les fonctions mathématiques (sin, cos, sqrt, etc.)
#include <ctype.h>    // Pour les fonctions de manipulation de caractères (toupper, isdigit, etc.)
#include <time.h>     // Pour les fonctions de manipulation du temps (time, localtime, etc.)
#include <limits.h>   // Pour les constantes définissant les limites des types de données
#include <float.h>    // Pour les constantes définissant les limites des types de données à virgule flottante
/*
Inverser une Chaîne de Caractères en Utilisant la Récursion
*/

void inverser(char* str, int start, int end){
    if (start >= end)
    {
        return;
    }else{
        char temp = str[end];
        str[end] = str[start];
        str[start] = temp;

        inverser(str, start + 1, end - 1);
    }
    
}

int main(){

    char str[50] = "hello";
    inverser(str, 0, strlen(str) -1);

    printf("Voici la chaine inversée : %s\n", str);

    return 0;
}