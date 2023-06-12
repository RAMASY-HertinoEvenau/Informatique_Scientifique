#include <stdio.h>
#include <stdlib.h>

void Euler(float a , float b , float N , float alpha) {
    float h , t , w;
    short i;
    h = (b - a)/N;
    t = a;
    w = alpha;
    printf("\t w[0] = %f \t", w);
    printf("\t t = %f \n", t);
    for(i = 1 ; i <= N ; i++) {
        w = w + h * ((-t * w) + ((4 * t) / w));
        t = t + h;
        printf("\t w[%d] = %f \t", i , w);
        printf("\t t = %f \n", t);
    }
}

void Taylor() {
    printf("Methode indisponible pour le moment");
}

void RungeKutta() {
    printf("Methode indisponible pour le moment");
}

int main()
{
    short choix;
    float a , b , N , alpha;
    do {
        system("cls");
        printf("Par quel methode voulez-vous utiliser pour resoudre l'equation :\n");
        printf("\t\t\t 1-Methode d'Euler \n");
        printf("\t\t\t 2-Methode de Taylor \n");
        printf("\t\t\t 3-Methode de Runge Kutta \n");
        printf("(Veuillez choisir entrer une option 1 ou 2 ou 3): ");
        scanf("%d", &choix);
    }
    while(choix<1 || choix>3);
    printf("Entrer les points limites : \n");
    printf("\t a = ");
    scanf("%f", &a);
    printf("\t b = ");
    scanf("%f", &b);
    printf("Entrer l'entier N = ");
    scanf("%f", &N);
    printf("Entrer le condition intiale alpha = ");
    scanf("%f", &alpha);
    switch(choix){
        case 1 :
            Euler(a , b , N , alpha);
            return 0;
        case 2 :
            Taylor();
            return 0;
        default :
            RungeKutta();
            return 0;
    }
    return 0;
}
