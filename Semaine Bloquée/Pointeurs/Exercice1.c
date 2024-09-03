#include <stdio.h>    // Pour les entrées/sorties standard (printf, scanf, etc.)
#include <stdlib.h>   // Pour les fonctions utilitaires générales (malloc, free, atoi, etc.)
#include <string.h>   // Pour les fonctions de manipulation de chaînes (strcpy, strcmp, etc.)
#include <math.h>     // Pour les fonctions mathématiques (sin, cos, sqrt, etc.)
#include <ctype.h>    // Pour les fonctions de manipulation de caractères (toupper, isdigit, etc.)
#include <time.h>     // Pour les fonctions de manipulation du temps (time, localtime, etc.)
#include <limits.h>   // Pour les constantes définissant les limites des types de données
#include <float.h>    // Pour les constantes définissant les limites des types de données à virgule flottante


void permuter(int* adr_a, int* adr_b){
    printf("Voici l'adresse de A : %p et la valeur de A : %d avant permutation\n",&adr_a , *adr_a);
    printf("Voici l'adresse de B : %p et la valeur de B : %d avant permutation\n\n",&adr_b , *adr_b);

    int* temp;
    printf("Initialisation d'une variable temporaire d'adresse : %p\n\n", &temp);
    temp = adr_b;
    adr_b = adr_a;
    adr_a = temp;


    printf("Voici l'adresse de A (Apres permutation)\n: %p et la valeur de A : %d\n",&adr_a , *adr_a);
    printf("Voici l'adresse de B (Apres permutation)\n: %p et la valeur de B : %d\n",&adr_b , *adr_b);
}

int main(){
    int a = 10;
    int b = 20;
    permuter(&a,&b);
}