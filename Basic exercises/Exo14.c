#include <stdio.h>
/* 
Write a program in C to find the number and sum of all integers between 100 and 200 which are divisible by 9.
Expected Output :
Numbers between 100 and 200, divisible by 9 :
108 117 126 135 144 153 162 171 180 189 198
The sum : 1683
*/


int main(){

    int list[50];
    int sum = 0;

    int pointeurList = 0;
    for (size_t i = 100; i <= 200; i++)
    {
        if (i % 9 == 0)
        {
            list[pointeurList] = i;
            pointeurList++;
        }
    }

    /*
    Affichage de la liste
    */
   int pointeurAffichage;
   for (size_t i = 0; i < pointeurList ; i++)
   {
    printf("%d " ,list[pointeurAffichage]);
    pointeurAffichage++; 
   }
   printf("\n");

   /*
   Calcul de la somme
   */
    int pointeurSomme;
    for (size_t i = 0; i < pointeurList ; i++)
    {
        sum += list[pointeurSomme];
        pointeurSomme++; 

        
    }

    printf("Voici la somme : %d " , sum);
  
   
    

    return 0;
}