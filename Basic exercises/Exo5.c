#include <stdio.h>

/*
Programme qui determine tout les diviseurs d'un entiers 
diviseurs = [1,number]
*/
int main(){
    int number;
    printf("Saisir un nombre pour a : ");
    scanf("%d", &number);
    int list[number]; 
    /*
    Taille du tableau = number
    */
   int index = 0; //Pointeur de la liste 
   for (size_t i = 1 ; i <= number; i++)
   {
    if (number % i == 0)
    {
        list[index] = i;
        index++;
    }
   }
   

    printf("Voici la liste des diviseurs de %d" , number);
    printf(" List : \n");
    /*
    Affichage de la liste (Obliger de passer par une boucle for)
    UTILISER L'INDEX POUR PARCOURIR LA LISTE
    */
    for (size_t i = 0; i < index ; i++)
    {
        printf("%d ", list[i]);
    }
    
    return 0;
}