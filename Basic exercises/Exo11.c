#include <stdio.h>

/*
 Write a C program that calculates the product of numbers from 1 to 5 using a while loop
*/

int main(){
    int primaryNumber = 1;
    int i = 1;

    int result;

    while (i <= 5 )
    {
        result = primaryNumber * i ;
        printf("1 * %d = %d" , i, result);
        i++;
        printf("\n");
    }
    


    return 0;
}