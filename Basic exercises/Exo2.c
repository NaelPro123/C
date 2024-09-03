#include <stdio.h>
/*
SWAP de 2 valeurs a = b et b = a 
*/
int main(){
    int a;
    int b;
    int temp = 0; /*Stock une des deux valeurs pendant l'échange*/

    printf("Saisir une valeur pour a \n");
    scanf("%d", &a);

    printf("Saisir une valeur pour b \n");
    scanf("%d", &b);

    temp = b;
    b = a;
    a = temp;
    temp = 0; /*On reinitialise temp (Optionel)*/
    
    printf("Voici la valeur de a apres l'échange %d\n", a);
    printf("Voici la valeur de b apres l'échange %d\n", b);


    return 0;

}