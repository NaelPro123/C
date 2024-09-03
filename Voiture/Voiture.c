#ifndef VOITURE_H
#define VOITURE_H
#include <stdio.h>    // Pour les entrées/sorties standard (printf, scanf, etc.)
#include <stdlib.h>   // Pour les fonctions utilitaires générales (malloc, free, atoi, etc.)
#include <string.h>   // Pour les fonctions de manipulation de chaînes (strcpy, strcmp, etc.)
#include <math.h>     // Pour les fonctions mathématiques (sin, cos, sqrt, etc.)
#include <ctype.h>    // Pour les fonctions de manipulation de caractères (toupper, isdigit, etc.)
#include <time.h>     // Pour les fonctions de manipulation du temps (time, localtime, etc.)
#include <limits.h>   // Pour les constantes définissant les limites des types de données
#include <float.h>    // Pour les constantes définissant les limites des types de données à virgule flottante

struct Voiture
{
    char marque[50];
    char modele[50];
    int annee;
    int kilometrage;

};

struct Voiture creervoiture(char marque[50],char modele[50],int annee,int kilometrage){
    struct Voiture voiture;
    strcpy(voiture.marque, marque);
    strcpy(voiture.modele, modele);
    voiture.annee = annee;
    voiture.kilometrage = kilometrage;

    return voiture;
}


struct Voiture afficherVoiture(struct Voiture voiture){
    printf("Marque de la voiture %s \n Modele de la voiture %s \n Année de la voiture : %d \n Kilométrage de la voiture : %d\n",
     voiture.marque , voiture.modele, voiture.annee , voiture.kilometrage);

    return voiture;
}



#endif // VOITURE_H