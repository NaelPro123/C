#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Write a program in C to find the sum of all elements of the array.
*/

int main(){
    int sum = 0;

    int list[10];

    for (size_t i = 0; i < sizeof(list)/sizeof(list[0]); i++)
    {
        list[i] = random() % 10;
        printf("%d, " , list[i]);
    }
    


    for (size_t i = 0; i < sizeof(list)/sizeof(list[0]); i++)
    {
        sum += list[i];
    }




    printf("La somme des elements de la liste est égal a %d \n" , sum);
    
    return 0;
}