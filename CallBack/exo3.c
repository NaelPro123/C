#include <stdio.h>    // Pour les entrées/sorties standard (printf, scanf, etc.)
#include <stdlib.h>   // Pour les fonctions utilitaires générales (malloc, free, atoi, etc.)
#include <string.h>   // Pour les fonctions de manipulation de chaînes (strcpy, strcmp, etc.)
#include <math.h>     // Pour les fonctions mathématiques (sin, cos, sqrt, etc.)
#include <ctype.h>    // Pour les fonctions de manipulation de caractères (toupper, isdigit, etc.)
#include <time.h>     // Pour les fonctions de manipulation du temps (time, localtime, etc.)
#include <limits.h>   // Pour les constantes définissant les limites des types de données
#include <float.h>    // Pour les constantes définissant les limites des types de données à virgule flottante
/*
Verifier si une chaine est un palindrome (Retourne 1 SSI palindrome)
Deux méthodes : 
    - Récurivité 
    - Boucle basique 
*/


int isPalindrome(char* str, int start , int end){

    if (start >= end)
    {
        return 1;
    }else{
        if (str[start] == str[end])
        {
            return isPalindrome(str,start + 1,end - 1);
        }else{
            return 0;
        }
    }

}

int isPalindromeNonrecursif(char* str){
    char tableau[(strlen(str)) + 1];
    int size = sizeof(tableau)/sizeof(tableau[0]);
    for (size_t i = 0; str[i] != '\0'; i++){
        tableau[i] = str[i];
        
    }
    for (size_t i = 0; i < size; i++)
    {
        if (tableau[i] != tableau[size - 1 - i])
        {
            return 0;
        }

    }
    
    return 1;
    
}



int main(){
    char* str = "radar";

    /*
    if (isPalindrome(str, 0, strlen(str) - 1))
    {
        printf("La chaine %s est un palindrome \n" , str);
    }else{
        printf("La chaine %s n'est pas un palindrome \n" , str);
    }
    */

   printf("La chaine %s est un palindrome ? : %d\n", str,isPalindromeNonrecursif(str));
   
   

    return 0;

}