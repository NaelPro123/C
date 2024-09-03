#include <stdio.h>    // Pour les entrées/sorties standard (printf, scanf, etc.)
#include <stdlib.h>   // Pour les fonctions utilitaires générales (malloc, free, atoi, etc.)
#include <string.h>   // Pour les fonctions de manipulation de chaînes (strcpy, strcmp, etc.)
#include <math.h>     // Pour les fonctions mathématiques (sin, cos, sqrt, etc.)
#include <ctype.h>    // Pour les fonctions de manipulation de caractères (toupper, isdigit, etc.)
#include <time.h>     // Pour les fonctions de manipulation du temps (time, localtime, etc.)
#include <limits.h>   // Pour les constantes définissant les limites des types de données
#include <float.h>    // Pour les constantes définissant les limites des types de données à virgule flottante

#define _POSIX_C_SOURCE 200809L  // getline in POSIX.1-2008
/*
 * readline() reads an entire line from stream and stores at most one less than
 * size characters into the buffer pointed to by buffer.
 * A terminating null byte ('\0') is stored after the last character in the
 * buffer.
 *
 * On success, readline() returns the number of characters read, excluding the
 * terminating null byte ('\0').
 *
 * The function returns -1 on failure to read a line (including end-of-file
 * condition).
 */

static ssize_t readline(char *buffer, size_t size, FILE *stream)
{
        printf("Entrez une chaine quelconque : ");
        int compteurMaj = 0;
        int compteurMin = 0;
        int compteurAutre = 0;
        char *line = NULL;
        size_t len = 0;
        ssize_t nread;
        ssize_t ncopied = -1;

        nread = getline(&line, &len, stream);
        if (nread != -1) {
                // copy at most size - 1 bytes
                ncopied = nread < (ssize_t)size - 1 ? nread : (ssize_t)size - 1;
                memcpy(buffer, line, ncopied);
                // terminating null byte
                buffer[ncopied] = '\0';
        }
        free(line);

        //Je parcoure ma chaine de caractere en utilisant un pointeur qui pointe vers le premier element de ma chaine (buffer)
        char *p = buffer;
        while (*p != '\0') {  
            if(isupper(*p)){
                compteurMaj++;
            }else if(islower(*p)){
                compteurMin++;
            }else{
                compteurAutre++;
            }
            p++; 
        }

        printf("lower:	%d\nupper:	%d\nother:	%d(Caractere nul inclus)\n" , compteurMin, compteurMaj, compteurAutre);

        
        

        return ncopied;
}

int main(void)
{
        #define BUFFER_LEN 64

        char buffer[BUFFER_LEN];
        ssize_t nread;

       
        nread = readline(buffer, BUFFER_LEN, stdin);
       

        

        return EXIT_SUCCESS;
}