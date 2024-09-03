#include <stdio.h>
/*
Calcul du produit entre 2 valeurs 
*/


int main(){
   /*Demander a l'utilisateur de saisir une valeur*/
   int a;
   int b;
   printf("Saisir une valeur a: ");
   scanf("%d", &a);

   printf("Saisir une valeur b: ");
   scanf("%d", &b);


   /*Afficher le produit*/
   printf("Le produit est : %d" , a * b);

   return 0;
   
}