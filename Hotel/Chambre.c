#ifndef CHAMBRE_H
#define CHAMBRE_H
#include <stdio.h>    // Pour les entrées/sorties standard (printf, scanf, etc.)
#include <stdlib.h>   // Pour les fonctions utilitaires générales (malloc, free, atoi, etc.)
#include <string.h>   // Pour les fonctions de manipulation de chaînes (strcpy, strcmp, etc.)
#include <math.h>     // Pour les fonctions mathématiques (sin, cos, sqrt, etc.)
#include <ctype.h>    // Pour les fonctions de manipulation de caractères (toupper, isdigit, etc.)
#include <time.h>     // Pour les fonctions de manipulation du temps (time, localtime, etc.)
#include <limits.h>   // Pour les constantes définissant les limites des types de données
#include <float.h>    // Pour les constantes définissant les limites des types de données à virgule flottante

struct Chambre
{
    int numero;
    char type[200];
    float prix;
};
/**
 * Constructeur
 */
struct Chambre creerChambre(int numero,char type[200], float prix ) {
    struct Chambre chambre;
    
    chambre.numero = numero;
    strcpy(chambre.type,type);
    chambre.prix = prix;

    return chambre;

}


struct Chambre ajouterChambre(struct Chambre chambre){

    int numero;
    char type[200];
    float prix;

    printf("Vous avez choisi d'ajouter une chambre \n");
    printf("Entrez le numero de la chambre : \n");
    scanf("%d", &numero);
    chambre.numero = numero;

    do
    {
        printf("Entrez le type de la chambre (Simple/Double/Suite): \n");
        scanf("%25s", type);
        strcpy(chambre.type,type);
    } while (strcmp(chambre.type, "Double") != 0 && strcmp(chambre.type, "Simple") != 0 && strcmp(chambre.type, "Suite") != 0);


    printf("Entrez le prix de la chambre : \n");
    scanf("%f" , &prix);
    chambre.prix = prix;



    printf("Résumé : La chambre de numero %d , de type %s , de prix %f euros ,a était ajouter avec succès !\n " , numero , type , prix);

    return chambre;
    
}


void modifierChambre(struct Chambre chambre){
    
    int nouveauNumero; char nouveauType[200];float nouveauPrix;
    printf("vous avez choisi de modifier la chambre de numero %d : \n" , chambre.numero);
    
    printf("Entrez le nouveau numero de la chambre : \n");
    scanf("%d" , &chambre.numero);
    do
    {
        printf("Entrez le nouveau type de la chambre (Simple/Double/Suite) : \n");
        scanf("%s" , nouveauType);
        strcpy(chambre.type, nouveauType);
    }while (strcmp(chambre.type, "Double") != 0 && strcmp(chambre.type, "Simple") != 0 && strcmp(chambre.type, "Suite") != 0);
    
    printf("Saisir le nouveau prix de la chambre : \n");
    scanf("%f" , &chambre.prix);

    printf("Résumé : La chambre de numero %d , de type %s , de prix %f euros ,a était modifier avec succès !\n " , chambre.numero , chambre.type , chambre.prix);


}


void supprimerchambre(struct Chambre chambre){

    chambre.numero = 0;
    strcpy(chambre.type , "");
    chambre.prix = 0.0;

     printf("Résumé : La chambre a était supprimer avec succès !\n ");
    

}





#endif // CHAMBRE_H



