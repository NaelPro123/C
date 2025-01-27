#include <stdio.h>    // Pour les entrées/sorties standard (printf, scanf, etc.)
#include <stdlib.h>   // Pour les fonctions utilitaires générales (malloc, free, atoi, etc.)
#include <string.h>   // Pour les fonctions de manipulation de chaînes (strcpy, strcmp, etc.)
#include <math.h>     // Pour les fonctions mathématiques (sin, cos, sqrt, etc.)
#include <ctype.h>    // Pour les fonctions de manipulation de caractères (toupper, isdigit, etc.)
#include <time.h>     // Pour les fonctions de manipulation du temps (time, localtime, etc.)
#include <limits.h>   // Pour les constantes définissant les limites des types de données
#include <float.h>    // Pour les constantes définissant les limites des types de données à virgule flottante

/**
Écrire une procédure bin2dec() de prototype 
        void bin2dec(char bin[], char dec[])
 */

void bin2dec(char bin[], char dec[]){
    int decimalValeur = 0;
    int length = strlen(bin);

    for (size_t i = 0; i < length; i++)
    {
        if (bin[i] == '1')
        {
            decimalValeur += pow(2,length - 1 - i);

        }
        
    }
    sprintf(dec, "%d", decimalValeur); // Convert the decimal value to a string
    
    
}

int main(void){
    char binaire[256]; 
    char decimale[256];

    printf("Donner un nombre en binaire : ");
    scanf("%255s", binaire); 

    bin2dec(binaire, decimale);

    printf("Valeur decimale : %s" , decimale);

    return EXIT_SUCCESS;
}
