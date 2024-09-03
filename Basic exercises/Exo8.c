#include <stdio.h>
#include <math.h>

/*
The program must ask the height and the length of the base. 
The output of the program must be: 
Right-angled triangle of height __ and base __. Area __. (Blank spaces are filled
with the actual values).
(NOTE: Area = (base * height) / 2 )
Extend the program to calculate the area of a circumference.
*/

double base;
double hauteur;
double area;

int main(){
    printf("Saisir la longueur de la base du triangle rectangle : \n");
    scanf("%lf", &base);

    printf("Saisir la longueur de la hauteur du triangle rectangle : \n");
    scanf("%lf", &hauteur);

    printf("La formule utilisé sera la suivante \n Area = (base * height) / 2 ) ");

    area = ((base * hauteur) / 2);

    printf("Right-angled triangle of height %f and base %f. Area =  %f." , round(hauteur) , round(base) , round(area));


    return 0;
}

