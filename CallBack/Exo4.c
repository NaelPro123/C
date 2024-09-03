#include <stdio.h>    // Pour les entrées/sorties standard (printf, scanf, etc.)
#include <stdlib.h>   // Pour les fonctions utilitaires générales (malloc, free, atoi, etc.)
#include <string.h>   // Pour les fonctions de manipulation de chaînes (strcpy, strcmp, etc.)
#include <math.h>     // Pour les fonctions mathématiques (sin, cos, sqrt, etc.)
#include <ctype.h>    // Pour les fonctions de manipulation de caractères (toupper, isdigit, etc.)
#include <time.h>     // Pour les fonctions de manipulation du temps (time, localtime, etc.)
#include <limits.h>   // Pour les constantes définissant les limites des types de données
#include <float.h>    // Pour les constantes définissant les limites des types de données à virgule flottante

int rechercheBinaire(int tableau[], int debut, int fin, int valeur){
    
    if (tableau[debut] > tableau[fin]){
        return -1;
    }

    int millieu = debut + (fin - debut) / 2;

    if (tableau[millieu] == valeur)
    {
    return millieu;
    }
    else if (tableau[millieu] < valeur)
    {
    return rechercheBinaire(tableau, millieu + 1, fin, valeur);
    }
    else if (tableau[millieu] > valeur)
    {
        return rechercheBinaire(tableau, 0, millieu - 1, valeur);
    }


    return 0;
}

int main(){
    int tableau[] = {2,3,6,8,11,13,16,22,36}; //0 a 8
    int size = sizeof(tableau)/sizeof(tableau[0]);
    int valeur = 16;
    printf("%d se situe a l'indice : %d\n" , valeur,rechercheBinaire(tableau, 0,size -1, valeur));
}