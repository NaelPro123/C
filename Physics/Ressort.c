#include <stdio.h>
#include <stdlib.h>
#include <math.h>



struct Ressort
{
    float m;
    float k;
    float c;
    float v0;
    float y0;
    float pasTemps;
    float Tempstotal;
};

struct Ressort creeRessort(float m,float k,float c,float y0,float v0, float pasTemps,float Tempstotal){
    struct Ressort ressort;

    ressort.m = m;
    ressort.k = k;
    ressort.c = c;
    ressort.y0 = y0;
    ressort.v0 = v0;
    ressort.pasTemps = pasTemps;
    ressort.Tempstotal = Tempstotal;

    return ressort;
}

int calcul(){
    struct Ressort ressort = creeRessort(1.0, 10.0, 0.5, 0.1, 0.0, 0.01, 10.0);
    float t = 0;
    while (t <= ressort.Tempstotal)
    {
        ressort.v0 += ressort.pasTemps * (-ressort.c * ressort.v0/ressort.m - ressort.k * ressort.y0 / ressort.m);
        ressort.y0 += ressort.pasTemps * ressort.v0;
        t += ressort.pasTemps;

        printf("Au temps %f, la vitesse est de %f et la position est de %f\n", t, ressort.v0, ressort.y0);
    }
    return 0;
}

int main(){
    struct Ressort ressort = creeRessort(1.0, 10.0, 0.5, 0.1, 0.0, 0.01, 10.0);
    calcul();
    
    return 0;
}