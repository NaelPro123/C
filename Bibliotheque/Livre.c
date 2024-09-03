#ifndef LIVRE_H
#define LIVRE_H
#include <stdio.h>    // Pour les entrées/sorties standard (printf, scanf, etc.)
#include <stdlib.h>   // Pour les fonctions utilitaires générales (malloc, free, atoi, etc.)
#include <string.h>   // Pour les fonctions de manipulation de chaînes (strcpy, strcmp, etc.)
#include <math.h>     // Pour les fonctions mathématiques (sin, cos, sqrt, etc.)
#include <ctype.h>    // Pour les fonctions de manipulation de caractères (toupper, isdigit, etc.)
#include <time.h>     // Pour les fonctions de manipulation du temps (time, localtime, etc.)
#include <limits.h>   // Pour les constantes définissant les limites des types de données
#include <float.h>    // Pour les constantes définissant les limites des types de données à virgule flottante


struct Livre
{
    char* titre;
    char* auteur;
    int annee;
    int isbn;
};

void creerLivre(){
    struct Livre livre;
    livre.titre = (char*)malloc(100 * sizeof(char)); // Alloue de la memoire a titre 
    livre.auteur = (char*)malloc(100 * sizeof(char)); //Alloue de la memoire a auteur

    printf("Saisir le titre du livre :\n");
    scanf("%s" , livre.titre);

    printf("Saisir l'auteur du livre :\n");
    scanf("%s" , livre.auteur);

    printf("Saisir l'année du livre :\n");
    scanf("%d" , &livre.annee);

    printf("Saisir le code ISBN du livre :\n");
    scanf("%d" , &livre.isbn);

    printf("Le livre [ %s , %s , %d , %d ] a était créer avec succées \n", livre.titre , livre.auteur , livre.annee , livre.isbn);
}

void afficherLivre(struct Livre livre){
    printf("Voici le livre %s :\n [ Auteur : %s , Année : %d , ISBN : %d ] \n", livre.titre , livre.auteur, livre.annee , livre.isbn);
}



#endif