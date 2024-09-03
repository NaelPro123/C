#include <stdio.h>    // Pour les entrées/sorties standard (printf, scanf, etc.)
#include <stdlib.h>   // Pour les fonctions utilitaires générales (malloc, free, atoi, etc.)
#include <string.h>   // Pour les fonctions de manipulation de chaînes (strcpy, strcmp, etc.)
#include <math.h>     // Pour les fonctions mathématiques (sin, cos, sqrt, etc.)
#include <ctype.h>    // Pour les fonctions de manipulation de caractères (toupper, isdigit, etc.)
#include <time.h>     // Pour les fonctions de manipulation du temps (time, localtime, etc.)
#include <limits.h>   // Pour les constantes définissant les limites des types de données
#include <float.h>    // Pour les constantes définissant les limites des types de données à virgule flottante

/**
 * void dec2bin(char dec[], char bin[])
 * Decimal vers Binaire
 */
#define ARRAY_LEN 20

void dec2bin(char dec[], char bin[]){
    int number = atoi(dec);
    for (int i = number;  i > 0; i--)
    {
        if (number % 2 == 1 )
        {
            bin[i] = '1';
            number = number / 2;
        }else{
            bin[i] = '0';
        }
        
    }
    

}  


int main(void){
    char dec[ARRAY_LEN];
    char bin[ARRAY_LEN];

    printf("Saisir un entier en base 10");
    scanf("%s" , dec);
    

    dec2bin(dec,bin);

    printf("<%s> en binaire : <%s>" , dec , bin);
    

    return EXIT_SUCCESS;
}



