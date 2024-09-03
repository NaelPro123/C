#include "/Users/nael/Desktop/Personal Projects/C/Hotel/Chambre.c"
#include <stdio.h>    // Pour les entrées/sorties standard (printf, scanf, etc.)
#include <stdlib.h>   // Pour les fonctions utilitaires générales (malloc, free, atoi, etc.)
#include <string.h>   // Pour les fonctions de manipulation de chaînes (strcpy, strcmp, etc.)
#include <math.h>     // Pour les fonctions mathématiques (sin, cos, sqrt, etc.)
#include <ctype.h>    // Pour les fonctions de manipulation de caractères (toupper, isdigit, etc.)
#include <time.h>     // Pour les fonctions de manipulation du temps (time, localtime, etc.)
#include <limits.h>   // Pour les constantes définissant les limites des types de données
#include <float.h>    // Pour les constantes définissant les limites des types de données à virgule flottante


int main(){
    
    struct Chambre *p; //Pointeur de la liste contenant les chambres
    int tailleListe = 10;
    p = (struct Chambre*)malloc(tailleListe * sizeof(struct Chambre));


    int pointeurListe = 0;
    int pointeurAffichage = 0;

    
    int choixUtilisateur;
    do
    {
        do
        {
            printf("1. Ajouter une chambre \n2. Modifier une chambre\n3. Supprimer une chambre\n4. Lister les chambres\n5. Quitter\n");
            scanf("%d" , &choixUtilisateur);
            if (choixUtilisateur == 1)
            {
            struct Chambre chambre = ajouterChambre(chambre);
            p[pointeurListe] = chambre;
            pointeurListe++;
            }

            if (choixUtilisateur == 2)
            {
                int numeroChambre;
                float prix;
                char type[200]; 
                printf("Veuillez saisir le numero et le prix de la chambre que vous souhaitez modifier\n Suivre le format (numero,prix)\n");
                scanf("%d , %f" , &numeroChambre, &prix);
                printf("Saisir le type de la chambre :");
                scanf("%25s", type);

                struct Chambre chambre = creerChambre(numeroChambre , type , prix);
                modifierChambre(chambre);

                p[pointeurListe] = chambre;
                pointeurListe++;
                
            }

            if (choixUtilisateur == 3)
            {
                int numeroChambre;
                float prix;
                char type[200]; 
                printf("Veuillez saisir le numero et le prix de la chambre que vous souhaitez supprimer\n Suivre le format (numero,prix)\n");
                scanf("%d , %f" , &numeroChambre, &prix);
                printf("Saisir le type de la chambre que vous souhaitez supprimer \n:");
                scanf("%25s", type);

                struct Chambre chambre = creerChambre(numeroChambre , type , prix);

                supprimerchambre(chambre);
            }
            if (choixUtilisateur == 4)
            {
                for (size_t i = 0; i < 10 ; i++)
                {
                    printf("CHAMBRE n° %d\n---------------------\n" , pointeurAffichage);
                    printf("Chambre numéro : %d \n" , p[pointeurAffichage].numero);
                    printf("Chambre de prix : %f \n" , p[pointeurAffichage].prix);
                    printf("Chambre de type : %s \n" , p[pointeurAffichage].type);
                    pointeurAffichage++;
                }
                
            }
            
        } while (choixUtilisateur != 5);
        
    } while (choixUtilisateur > 5 || choixUtilisateur < 1);


    
    
    
    
    


    
    
    
    
    
    
    return 0;
}