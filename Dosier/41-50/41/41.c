#include <stdio.h>

void main(){

    int angulo;

    printf("Ingrese un numero entre 0-360 para determinar en que cuadrante se encuentra: ");
    scanf("%d", &angulo);

    if(angulo < 0 || angulo > 360){
        printf("Entre un angulo valido");
    }
    else if(angulo >= 0 && angulo <= 90){
        printf("\nEl angulo %d esta en el cuadrante 1", angulo);
    }
    else if(angulo >=91 && angulo <=180){
        printf("\nEl angulo %d esta en el cuadrante 2", angulo);
    }
    else if(angulo >=181 && angulo <=270){
        printf("\nEl angulo %d esta en el cuadrante 3", angulo);
    }
    else if(angulo >=271 && angulo <= 360){
        printf("\nEl angulo %d esta en el cuadrante 4", angulo);
    }

}
getch();
