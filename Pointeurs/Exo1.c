#include <stdio.h>
#include <string.h>
/**
 * Write a program in C to add two numbers using pointers.
Test Data :
Input the first number : 5
Input the second number : 6
Expected Output :

The sum of the entered numbers is : 11 
 */

int main(){

    int a = 10;
    int b = 20;
    int *pointeurA = &a;
    int *pointeurB = &b;

    printf("Memory adress of a = %p and b = %p\n" , pointeurA, pointeurB);
    int sum = *pointeurA + *pointeurB;
    printf("Sum = %d " , sum);





    return 0;
}