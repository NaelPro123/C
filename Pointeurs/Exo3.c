#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * Write a program in C to find the maximum number between arraylist of numbers using a pointer.
 */

int main(){
    int *p;
    int tailleListe = 10;
    int max = 0;

    p = (int*)malloc(tailleListe * sizeof(int));
    for (size_t i = 0; i < tailleListe; i++)
    {
        p[i] = rand() * 10;
        printf("P[%zu] = %d\n" , i , p[i]);
    }

    for (size_t i = 0; i < tailleListe; i++)
    {
        if (p[i] > max)
        {
            max = p[i];
        }
        
    }

    printf("Max de la liste = %d ainsi que son adresse en MC : MC[%p]" , max , &max);
    
    free(p);

    return 0;

}