#include <stdio.h>
#include <math.h>
/*
Write a C programm that convert any number into a binary Array MAX : 128 bit <=> 2^7
*/
int main(){

    int arrayBinary[8];
    int number = 64;
    int PointeurBinaryArray = 0;
    int pointeurAffichage = 0;


    for (int i = 7; i >= 0; i--)
    {
        
        if (pow(2,i) <= number)
        {
            number -= pow(2,i);
            arrayBinary[PointeurBinaryArray] = 1;

        }else{
            arrayBinary[PointeurBinaryArray] = 0;
         
        }
        PointeurBinaryArray++;
        
    }

    for (size_t i = 0; i < sizeof(arrayBinary)/sizeof(arrayBinary[0]); i++)
    {
        printf("%d " , arrayBinary[sizeof(arrayBinary)/sizeof(arrayBinary[0]) - 1 - i]);
        pointeurAffichage++;
    }
    

    return 0;
}