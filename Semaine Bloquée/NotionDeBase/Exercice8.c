#include <stdio.h>    // Pour les entrées/sorties standard (printf, scanf, etc.)
#include <stdlib.h>   // Pour les fonctions utilitaires générales (malloc, free, atoi, etc.)
#include <string.h>   // Pour les fonctions de manipulation de chaînes (strcpy, strcmp, etc.)
#include <math.h>     // Pour les fonctions mathématiques (sin, cos, sqrt, etc.)
#include <ctype.h>    // Pour les fonctions de manipulation de caractères (toupper, isdigit, etc.)
#include <time.h>     // Pour les fonctions de manipulation du temps (time, localtime, etc.)
#include <limits.h>   // Pour les constantes définissant les limites des types de données
#include <float.h>    // Pour les constantes définissant les limites des types de données à virgule flottante

/**
 * Écrire un programme calculette.c qui accepte trois arguments : un premier entier (opérande de gauche lhs), un opérateur (+, -, x, /)
 *  et un deuxième entier (opérande de droite rhs). Le programme calcule et affiche le résultat de l'opération ou un message d'erreur si nécessaire.
 */


int calcul(int operandeGauche, char operateur[2], int operandedroit){

    
    int result;
    if (strcmp(&operateur[0], "+") == 0)
    {
        result = operandeGauche + operandedroit;
    }else if(strcmp(&operateur[0], "x") == 0){
        result = operandeGauche * operandedroit;
    }else if (strcmp(&operateur[0], "/") == 0){
        result = operandeGauche / operandedroit;
    }else if (strcmp(&operateur[0], "-") == 0){
        result = operandeGauche - operandedroit;
    }else{
        printf("Opération impossible\n");
        return -1;
    }
    
    return result;
}

int main(void){
    int operandeGauche;
    char operateur[2];
    int operandedroit;
    int resultat;

    printf("Saisir la première opérande \n");
    scanf("%d" , &operandeGauche);

    printf("Saisir la deuxième operande \n");
    scanf("%d" , &operandedroit);

    printf("Saisir l'opérateur (+ x / -) \n");
    scanf("%1s" , operateur);


    resultat = calcul(operandeGauche, operateur, operandedroit);
    printf("Le résultat est: %d\n", resultat);
    
}