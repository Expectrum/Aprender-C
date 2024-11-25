#include <stdio.h>

void main(){

    float nota;

    printf("Cual es tu nota? (0-10) ");
    scanf("%f", &nota);

    if(nota >= 5){
        printf("Felicidades, estas aprobado!\n");
    }
    else {
        printf("Esfuerzate mas, estas suspendido!\n");
    }

}

getch();
