#include <stdio.h>
/*
Dtermine si une valeur est PAIR ou IMPAIRE
*/
int main(){
    int a;
    
    printf("Saisir une valeur :  \n");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("Il s'agit d'une valeur PAIR");
    }else{
        printf("Il s'agit d'une valeur IMPAIRE");
    }

    return 0;
}