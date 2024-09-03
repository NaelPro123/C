

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct ChuteLibre{
    float m; //Masse de l'objet
    float g;
    float k; //Coefficient de frottement en N/m
    float v; //vitesse initiale 
    float y; //position initiale 
    float pasTemps; 
    float tempsTotal; 
};
struct ChuteLibre creerChuteLibre(float m, float g, float k, float v, float y, float pasTemps, float tempsTotal) {
    struct ChuteLibre chute;
    chute.m = m;
    chute.g = g;
    chute.k = k;
    chute.v = v;
    chute.y = y;
    chute.pasTemps = pasTemps;
    chute.tempsTotal = tempsTotal;
    return chute;

}

int calcul(){
    struct ChuteLibre chute = creerChuteLibre(10.0, 9.81, 0.5, 0.0, 100.0, 0.1, 10.0);
    float t = 0;
    while (t < chute.tempsTotal && chute.y > 0)
    {
        double acceleration = chute.g - (chute.k * pow(chute.v,2)/ chute.m );

        chute.v += chute.pasTemps * acceleration;
        chute.y -= chute.pasTemps * chute.v; 
        t += chute.pasTemps;

        printf("Au temps %f , l'objet a une position de %f, et une vitesse de %f\n" , t, chute.y, chute.v);
    }
    
    return 0;
}

int main(){
    struct ChuteLibre chute = creerChuteLibre(10.0, 9.81, 0.5, 0.0, 100.0, 0.01, 10.0);
    calcul();
}

