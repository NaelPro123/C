 #include <stdio.h>    // Pour les entrées/sorties standard (printf, scanf, etc.)
#include <stdlib.h>   // Pour les fonctions utilitaires générales (malloc, free, atoi, etc.)
#include <string.h>   // Pour les fonctions de manipulation de chaînes (strcpy, strcmp, etc.)
#include <math.h>     // Pour les fonctions mathématiques (sin, cos, sqrt, etc.)
#include <ctype.h>    // Pour les fonctions de manipulation de caractères (toupper, isdigit, etc.)
#include <time.h>     // Pour les fonctions de manipulation du temps (time, localtime, etc.)
#include <limits.h>   // Pour les constantes définissant les limites des types de données
#include <float.h>    // Pour les constantes définissant les limites des types de données à virgule flottante

int carre_copie(int n){
    int carre = pow(n,2);
    printf("Le carré de %d est %d (Premiere version)\n" ,n,carre);
    return carre; 
}


void carre_adresse(int* adr_n){
    printf("l'adresse en MC apres procedure de %d vaut %p et son carré vaut %f" , *adr_n,adr_n, pow(*adr_n,2));
}


int main(){
    /*Premiere version */
    carre_copie(2);
    
    /*Deuxième version */
    int n = 2;
    printf("Adresse de n avant passage dans la procedure %p\n" , &n);
    carre_adresse(&n);


    return 0;
}