#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


/**
 * Ecrire un programme simple avec :
 * - Un arraylist composé d'entiers (Générer aléatoirement)
 * Utiliser le plus possible des fonctions (Pas tout faire dans le main)
 * - Un pointeur relié au tableau
 * - Pour chaque entier afficher sa valeur en MC et sa valeur brute 
*/

int array[10];  
int *p = array;

void genererArrayList(){
    
    for (size_t i = 0; i < sizeof(array)/sizeof(array[0]); i++)
    {
        array[i] = (rand() % 10); // Génère un entier entre 1 et 9
    }
}


int main(){
    genererArrayList();
    srand(time(NULL)); //Initialiser a 0 pour avoir des nombres compris dans l'intervalle 

    for (size_t i = 0; i < sizeof(array)/sizeof(array[0]); i++)
    {
        printf("Valeur en MC a l'indice p[%zu] = %p et sa valeur brute :  %d \n" , i, p, p[i]);
        p++;

    }
    
    return 0;
}
