#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/*
Write a C program to check whether an integer is a palindrome or not. An integer is a palindrome when it reads the same forward as backward.
Example:
Input:
i = 1221
i = -121
i = 100
Output:
Is Palindrome: 1
Is Palindrome: 0
Is Palindrome: 0
*/
int main(){

    int number = -121;
    int ordreDroitGauche[4];
    int pointeurList1 = 0;


    /*Ordre de droit vers gauche*/
    if (number < 0)
    {
        number = abs(number);
        char signe[1] = "-";
        printf("%s " , signe);
        while (number != 0)
        {
            int interm = number % 10;
            ordreDroitGauche[pointeurList1] = interm;
            number = number / 10;
            pointeurList1++;
        }
    }else{
        while (number != 0)
        {
            int interm = number % 10;
            ordreDroitGauche[pointeurList1] = interm;
            number = number / 10;
            pointeurList1++;
        }
    }

    int pointeurAffichageI = 0; 
    int compteur = 0;
    for (size_t i = 0; i < sizeof(ordreDroitGauche)/sizeof(ordreDroitGauche[0]); i++)
    {
        /*Compare premier / dernier ainsi de suite */
        if (ordreDroitGauche[pointeurAffichageI] == ordreDroitGauche[sizeof(ordreDroitGauche)/sizeof(ordreDroitGauche[0]) - 1 - i])
        {
            compteur++;
        }

        
        pointeurAffichageI++;
    }

    if (compteur == sizeof(ordreDroitGauche)/sizeof(ordreDroitGauche[0]))
    {
        printf(" Is Palindrom : 1\n");
    }else{
        printf(" Is Palindrom : 0\n");
    }
    
    
   




    return 0;
}