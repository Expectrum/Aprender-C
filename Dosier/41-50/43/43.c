#include <stdio.h>
#include <locale.h>

// Funci�n para limpiar el buffer de entrada
void limpiar_buffer() {
    while (getchar() != '\n'); // Descarta caracteres hasta el salto de l�nea
}

int main(){
    setlocale(LC_ALL, ""); //configurem el UTF-8

    int edad, estatura;

    printf("Bienvenido al tren de la bruja!");

    printf("\nPorfavor, ingrese su edad: ");
    if(scanf("%d", &edad) !=1){ //validamos que el contenido que se entra es un numero
        printf("Entrada no valida");
        limpiar_buffer();
        return 1;
    }

    else if(edad >= 5 && edad <= 10){
        printf("Porfavor, ingrese su estatura en centimetros: ");
        limpiar_buffer();

        if(scanf("%d", &estatura) !=1){ //validamos que el contenido que se entra es un numero
            printf("entrada no valida");
            return 1;
        }
        else if(estatura >=50 && estatura <=160){
            printf("Usted puede entrar al tren de la bruja, �disfrute!");
        }
        else if(estatura < 50){
            printf("Usted no puede entrar porque su estatura es menor a 50cm");
        }
        else if(estatura >160){
            printf("Usted no puede entrar porque su estatura es mayor a 160cm");
        }

    }

    else if(edad < 5){
        printf("\nUsted no puede entrar porque la edad minima es de 5 a�os y usted tiene %d a�os", edad);
    }

    else if(edad > 10){
        printf("\nUsted no puede entrar porque la edad maxima es de 10 a�os y usted tiene %d a�os", edad);
    }
    return 0;
}