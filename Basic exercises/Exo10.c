#include <stdio.h>
/*
Write a C program to print numbers from 0 to 10 and 10 to 0 using two while loops.
*/


int main(){
    int firstloop = 10;
    int secondloop = 0;

    while (firstloop >= 0)
    {
        printf("%d" , firstloop);
        firstloop--;
    }
    printf("\n");

    while (secondloop <= 10)
    {
        printf("%d" , secondloop);
        secondloop++;
    }
    


    return 0; 
}