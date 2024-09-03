#include <stdio.h>

/*
Write a program that asks for a time value (in seconds) and transforms it into
minutes and seconds.
*/

int main(){
    int seconde;
    int minuteConverti = 0; //Les minutes converties 
    
    printf("Saisir un nombre de secondes a convertir : \n");
    scanf("%d", &seconde);


    while (seconde >= 60)
    {
        if (seconde >= 60)
     {
         seconde -= 60;
         minuteConverti++;
    }
    }
    
    printf("Le nombre de seconde que vous avez saisi vaut en minutes : %d minutes et %d secondes", minuteConverti, seconde);

    return 0;
}