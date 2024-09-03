#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int tailleTableau = 0;
    int *p; //Pointeur du tableau

    printf("Veuillez saisir la taille du tableau :\n");
    scanf("%d" , &tailleTableau);
    printf("La taille du tableau est : %d\n" , tailleTableau);

    p = (int*)malloc(tailleTableau * sizeof(int));

    for (size_t i = 0; i < tailleTableau + 1; i++)
    {
        p[i] = random() * 10;
        printf("p[%zu] = %d\n" , i, p[i]);
    }

    free(p);
    
    
    return 0;
}