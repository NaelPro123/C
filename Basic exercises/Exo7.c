#include <stdio.h>


/**
 * Méthode qui prend en parametres une chaine de caractere (sans espace )et renvoie le
 * nombre de lettres contenue
 * @return nb de lettres (compteur)
*/
int main(){

    char chaine[256]; // ArrayList de caractere (256 caractere max)
    printf("Saisir une chaine de caracteres : "); // Message de demande de saisie
    scanf("%s",chaine); // Recuperation de la chaine de caractere

    printf("voici la chaine de caractere saisi -> %s\n", chaine); // Affichage de la chaine de caractere


    int compteur = 0; // Initialisation du compteur
    for (size_t i = 0; chaine[i] != '\0'; i++)
    {
        if (chaine[i] != NULL)
        {
            compteur++;
        }
        
    }

    printf("Voici le nombre de lettres : %d " , compteur);
    

    return 0;

}