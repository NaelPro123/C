#include "/Users/nael/Desktop/Personal Projects/C/Voiture/Voiture.c"
#include <stdio.h>    // Pour les entrées/sorties standard (printf, scanf, etc.)
#include <stdlib.h>   // Pour les fonctions utilitaires générales (malloc, free, atoi, etc.)
#include <string.h>   // Pour les fonctions de manipulation de chaînes (strcpy, strcmp, etc.)
#include <math.h>     // Pour les fonctions mathématiques (sin, cos, sqrt, etc.)
#include <ctype.h>    // Pour les fonctions de manipulation de caractères (toupper, isdigit, etc.)
#include <time.h>     // Pour les fonctions de manipulation du temps (time, localtime, etc.)
#include <limits.h>   // Pour les constantes définissant les limites des types de données
#include <float.h>    // Pour les constantes définissant les limites des types de données à virgule flottante


struct Voiture *p;
int taille = 10;
int pointeurListe = 0;

void initListe(){
    p = (struct Voiture*)malloc(taille * sizeof(struct Voiture));
}


void ajouterVoiture(){
    struct Voiture voiture;

    printf("Saisir le modele de la voiture \n");
    scanf("%50s" , voiture.modele);
    
    
    

    printf("Saisir l'année de la voiture \n");
    scanf("%d" , &voiture.annee);


    printf("Saisir la marque de la voiture \n");
    scanf("%50s" , voiture.marque);
    
    

    printf("Saisir le kilométrage de la voiture \n");
    scanf("%d" , &voiture.kilometrage);

    printf("La voiture a était ajouter avec succés !\n");
    
    p[pointeurListe] = voiture;
    pointeurListe++;
}    

void supprimervoiture(){
    char modeleSupprimer[50];
    char confirmation[25];
    printf("Saisir le modele de la voiture a supprimer \n");
    scanf("%49s", modeleSupprimer);
    printf("Vous avez decider de supprimer la voitre de modele : %s (Y/N) ?\n" , modeleSupprimer);
    scanf("%24s" , confirmation);
    if (strcmp(confirmation,"Y") == 0 | strcmp(confirmation,"y") == 0)
    {
        for (size_t i = 0; i < taille; i++)
        {
            if (p[i].modele == modeleSupprimer)
            {
                strcpy(p[i].modele, "");
                strcpy(p[i].marque, "");
                p[i].annee = 0;
                p[i].kilometrage = 0;

                //Affichage de la suppression 
                printf("Voici la voiture supprimer: \n");
                printf("Le modele : %s , la marque : %s , l'année %d , le kilométrage %d" , p[i].modele,p[i].marque, p[i].annee , p[i].kilometrage);

            }else{
                printf("Ce modele n'existe pas dans nos base de données. Aucune suppression n'est possible");
            }
        }
    }else{
        printf("Suppression annulée (N)");
    }
    
}

void afficherVoitureParc(){
    for (size_t i = 0; i < taille; i++)
    {
        afficherVoiture(p[i]);
    }
    
}


int main(){
    initListe();
    int choixUtilisateur;
    do
    {
        do
        {
            printf("---------------------\n");
            printf("1 : Ajouter une voiture\n2 : Supprimer une voiture\n3 : Quitter l'application \n4 : Afficher toutes les voitures \n");
            scanf("%d" , &choixUtilisateur);
            printf("---------------------\n");

            if (choixUtilisateur == 1)
            {
                ajouterVoiture();
            }
            if (choixUtilisateur == 2)
            {
                supprimervoiture();
            }
            if (choixUtilisateur == 4)
            {
                afficherVoitureParc();
            }
            
            


        } while (choixUtilisateur != 3);
        
    } while (choixUtilisateur < 1 || choixUtilisateur > 3);
    

    return 0;
}



