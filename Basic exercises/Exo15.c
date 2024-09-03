#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/*
Write a C program to reverse the digits of a given integer.
Example:
Input:
i = 123
i = 208478933
i = -73634
Output:
Reverse integer: 321
Reverse integer: 339874802
Reverse integer: -43637
*/
int main(){
    int number = 1221;
    int list[20];
    int pointeurList = 0;
    
    if (number < 0)
    {
        number = abs(number);
        char signe[1] = "-";
        printf("%s " , signe);
        while (number != 0)
        {
            int interm = number % 10;
            printf("%d " , (interm));
            list[pointeurList] = interm;
            number = number / 10;
            pointeurList++;
        }
    }else{
            while (number != 0)
        {
            int interm = number % 10;
            printf("%d " , (interm));
            list[pointeurList] = interm;
            number = number / 10;
            pointeurList++;
        }
    }
    

   
    return 0;
}