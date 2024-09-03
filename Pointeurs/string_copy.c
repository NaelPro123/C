#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    int taille = 0;
    char **p ; //Pointeur du tableau
    printf("Saisir le nomre de chaine de caractere que vous voulez saisir :\n");
    scanf("%d" , &taille);

    p = (char**)malloc(taille * sizeof(char*));



    for (size_t i = 0; i < taille + 1 ; i++)
    {
        p[i] = (char*)malloc(100 * sizeof(char)); // Allouer de la mémoire pour chaque chaîne
        strcpy(p[i], "Hello world");
        printf("p[%zu] = %s\n" , i, p[i]);
    }
    
    free(p);

    return 0;
}