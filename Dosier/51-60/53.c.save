#include <stdio.h>
#include <locale.h>

int main(){

    float nota;

    setlocale(LC_ALL, ""); // Configura UTF-8 para caracteres especiales

    printf("¿Cual es tu nota? ");

    if(scanf("%f", &nota) !=1 || nota < 0 || nota > 10){ //Nos aseguramos de que la entrada sea legible por el '%f' y que la entrada sea una nota valida
        printf("\nPorfavor introduce un numero valido");
        return 1;
    }
    else if(nota < 5){
        printf("Con un %.1f como nota, tu calificación es: Insuficiente", nota);
    }
    else if(nota >= 5 && nota < 6.5){
        printf("Con un %.1f como nota, tu calificación en: Bien", nota);
    }
    else if(nota >= 6.5 && nota < 8.5){
        printf("Con un %.1f como nota, tu calificación es: Notable", nota);
    }
    else if(nota >= 8.5 && nota < 10){
        printf("Con un %.1f como nota, tu calificación es: Excelente", nota);
    }
    else if (nota == 10){
        printf("Con un %.1f como nota, tu calificación es: Excelente", nota);
    }

    return 0;
}
