#include <stdio.h>
#include <stdlib.h>


/**
 * Write a program in C to find the maximum number between two numbers using a pointer.
Test Data :
Input the first number : 5
Input the second number : 6
Expected Output :

6 is the maximum number.
 */

int main(){ 
    int number1 = 5;
    int number2 = 6;

    int *ptr1 = &number1;
    int *ptr2 = &number2;

/** 
    if (*ptr1 < *ptr2)
    {
        printf("La valeur %d a l'adresse %p represente le maximum" , *ptr2, &ptr2);
    }else{
        printf("La valeur %d a l'adresse %p represente le maximum", *ptr1 , &ptr1);
    }
    
*/

    *ptr1 = 2;

    printf("%d" , number1);


    




    return 0;
}