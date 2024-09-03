#include <stdio.h>
/*

Affiche le plus grand entre trois entiers saisies
MAX(a,b,c)

*/


int main(){
    int a;
    int b;
    int c;
    int liste[3]; /*Création d'une liste dans laquelle je stock mes valeurs */

    int max = 0;

    printf("Saisir une valeur pour a : ");
    scanf("%d", &a);
    liste[0] = a;
    printf("Saisir une valeur pour b : ");
    scanf("%d", &b);
    liste[1] = b;
    printf("Saisir une valeur pour c : ");
    scanf("%d", &c);
    liste[2] = c;

    for (size_t i = 0; i < sizeof(liste)/sizeof(liste[0]); i++)
    {
        if (liste[i] > max)
        {
            max = liste[i];
        }
    }
    

    printf("La valeur maximal est ; %d", max);
    return 0;
}