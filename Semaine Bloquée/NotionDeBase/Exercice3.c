#include <stdio.h>    // Pour les entrées/sorties standard (printf, scanf, etc.)
#include <stdlib.h>   // Pour les fonctions utilitaires générales (malloc, free, atoi, etc.)
#include <string.h>   // Pour les fonctions de manipulation de chaînes (strcpy, strcmp, etc.)
#include <math.h>     // Pour les fonctions mathématiques (sin, cos, sqrt, etc.)
#include <ctype.h>    // Pour les fonctions de manipulation de caractères (toupper, isdigit, etc.)
#include <time.h>     // Pour les fonctions de manipulation du temps (time, localtime, etc.)
#include <limits.h>   // Pour les constantes définissant les limites des types de données
#include <float.h>    // Pour les constantes définissant les limites des types de données à virgule flottante

float celsius(float fahrenheit){
    float conversionCelsius;
    printf("-----------------------\n");
    printf("Fahrenheit\tCelsius\t\n");
    printf("-----------------------\n");

    if (fahrenheit <= 180 )
    {
        for (size_t i = fahrenheit; i <= 200; i = i +20)
        {
            conversionCelsius = (5 * (fahrenheit - 32)) / 9;
            printf("%zu\t     %f\t\n", i, round(conversionCelsius * 10)/10);
            fahrenheit += 20;
        }
        
    }else{
        printf("Nombre en fahrenheit doit etre <= 180");
    }
    
    
    return 0.0;
    
}

int main(){
    celsius(15);

    return 0;
}