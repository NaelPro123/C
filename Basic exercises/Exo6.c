#include <stdio.h>

/*
Exercice 15 de : 
https://www.lamsade.dauphine.fr/~manouvri/C/PolyExoC_MM.pdf
*/



/**
 * Fonction qui permet de saisir une heure, minute et secondes 
 * @return un entier = 0
*/
int saisirHeure(){
    
    int iHeures;
    int iMinutes;
    int iSecondes;

    do
    {
        printf("Saisir une heure comprise entre 1h et 24h ");
        scanf("%d", &iHeures);
    } while (iHeures < 1 || iHeures > 24);

    do
    {
        printf("Saisir des minutes comprise entre 0 et 60 ");
        scanf("%d", &iMinutes);
    } while (iMinutes < 0 || iMinutes > 60);

    do
    {
        printf("Saisir des secondes comprise entre 0 et 60 ");
        scanf("%d", &iSecondes);
    } while (iSecondes < 0 || iSecondes > 60);

    printf("Il est %d heure(s), %d minute(s), %d seconde(s).  ", iHeures, iMinutes, iSecondes);

    return 0;
}

/**
 * Fonction principal du programme 
 * appelle la méthode saisirHeure
*/
int main(){
    int iHeures;
    int iMinutes;
    int iSecondes;

    saisirHeure();
    
    return 0;
}