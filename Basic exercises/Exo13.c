#include <stdio.h>

/*
Write a program in C to count the frequency of each element of an array.
*/


int main(){
    int list[10];
    list[0] = 5;
    list[1] = 12;
    list[2] = 3;
    list[3] = 22;
    list[4] = 11;
    list[5] = 10;
    list[6] = 32;
    list[7] = 12;
    list[8] = 7;
    list[9] = 8;

    

    /*
    Affichage de la liste 
    */

    int index = 0;
    for (size_t i = 0; i < sizeof(list)/sizeof(list[0]); i++)
    {
        printf("%d \n",list[index]);
        index++;
    }
    

    /*
    Manipulation de la liste 
    */
   
    int pointeur = 0; //Pointeur principal de la liste
    
    for (size_t i = 0; i < sizeof(list)/sizeof(list[0]); i++)
    {
        int compteurOccurence = 0;
        int element = list[pointeur];
        printf("Voici l'élement a l'instanté : %d " , element);

        int secondPointeur = 0;
        for (size_t i = 0; i < sizeof(list)/sizeof(list[0]); i++)
        {

            if (element == list[secondPointeur])
            {
                compteurOccurence++;
            }
            secondPointeur++;
        }
        
        pointeur++;
        printf(" , il y'a %d occurence . \n", compteurOccurence);
    }
    

    return 0;
}
