#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/**
* méthode qui prend en parametre un ArrayList et retourne le nombre d'element plus petit a l'indice
*/
int main(){
    int list[10];
    int pointeurListePeuplement = 0;
    int compteurNombreMinus = 0;
    //Initialisation de la liste
    for (size_t i = 0; i < sizeof(list)/sizeof(list[0]); i++)
    {
        list[pointeurListePeuplement] = rand() % 10; //Genere un nombre et recupere le reste de la div par 10 [0;9]
        pointeurListePeuplement++;
    }

    //Affichage de la liste
    int pointeurAffichage = 0;
    for (size_t i = 0; i < pointeurListePeuplement; i++)
    {
        printf("%d " , list[pointeurAffichage]);
        pointeurAffichage++;
    }
    printf("\n");

    //Manip de la liste 
    int pointeurPrincipale = 0;
    for (size_t j = 0; j < pointeurListePeuplement; j++)
    {
        int temp = list[pointeurPrincipale];
        compteurNombreMinus = 0;
        int pointeurSecondaire = 0;
        for (size_t k = 0; k < pointeurListePeuplement; k++)
        {
            if (list[pointeurSecondaire] < temp)
            {
                compteurNombreMinus++;

            }
            pointeurSecondaire++;
        }
        printf("Pour l'element %d, il y'a %d nombres plus petits \n" , temp , compteurNombreMinus);
        pointeurPrincipale++;
        
    }



    return 0;
}