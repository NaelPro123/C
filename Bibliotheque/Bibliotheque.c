#include <stdio.h>    // Pour les entrées/sorties standard (printf, scanf, etc.)
#include <stdlib.h>   // Pour les fonctions utilitaires générales (malloc, free, atoi, etc.)
#include <string.h>   // Pour les fonctions de manipulation de chaînes (strcpy, strcmp, etc.)
#include <math.h>     // Pour les fonctions mathématiques (sin, cos, sqrt, etc.)
#include <ctype.h>    // Pour les fonctions de manipulation de caractères (toupper, isdigit, etc.)
#include <time.h>     // Pour les fonctions de manipulation du temps (time, localtime, etc.)
#include <limits.h>   // Pour les constantes définissant les limites des types de données
#include <float.h>    // Pour les constantes définissant les limites des types de données à virgule flottante
#include "/Users/nael/Desktop/Personal Projects/C/Bibliotheque/Livre.c"


    
struct Bibliotheque
{
    struct Livre *livres; 
    
};



void initListe(){
    struct Bibliotheque biblio;
    biblio.livres = (struct Livre*)malloc(10 * sizeof(struct Livre));
}



int main(){
    initListe();
    int choixUtilisateur;
    do
    {
        do
        {
            printf("---------------------\n");
            printf("1 : Ajouter un Livre\n2 : Supprimer un Livre\n3 : Rechercher un livre (ISBN)\n4 : Afficher tous les livres\n5 : Quitter\n");
            scanf("%d" , &choixUtilisateur);
            printf("---------------------\n");
        }while (choixUtilisateur < 1 & choixUtilisateur > 5);

        if (choixUtilisateur == 1)
        {
            creerLivre();
        

        }
        


    } while (choixUtilisateur != 5);
    
    
    
    
    
    return 0;
}

