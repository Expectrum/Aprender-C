#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, ""); //configuramos el UTF-8

    float peso, estatura, IMC;

    printf("Ingrese su peso en kilogramos: "); //solicitamos el peso
    if (scanf("%f", &peso) != 1) { // validamos que se entre un dato valido
        printf("Por favor, ingrese un peso v�lido.\n");
        return 1;
    }

    printf("Ingrese su estatura en metros: "); //solicitamos la estatura
    if (scanf("%f", &estatura) != 1) { // validamos que se entre un dato valido
        printf("Por favor, ingrese una estatura v�lida.\n");
        return 1;
    }

    // calculo del IMC
    IMC = peso / pow(estatura, 2);

    // clasificacion del IMC basandonos en la clasificaci�n: delgado
    if (IMC < 16) {
        printf("Tu IMC es: %.2f, por lo tanto eres delgado severo.\n", IMC);
    }
    else if(IMC >= 16 && IMC < 17){
        printf("Tu IMC es: %.2f, por lo tanto eres delgado moderado.\n", IMC);
    }
    else if(IMC >= 17 && IMC < 18){
        printf("Tu IMC es: %.2f, por lo tanto eres delgado aceptable.\n", IMC);
    }

    //clasificaci�n del IMC basandonos en la clasificaci�n: normal
    else if (IMC >= 18 && IMC < 25) {
        printf("Tu IMC es: %.2f, por lo tanto tienes una corpulencia normal.\n", IMC);
    }

    //clasificaci�n del IMC basandonos en la clasificaci�n: sobrepeso
    else if (IMC >= 25 && IMC < 30) {
        printf("Tu IMC es: %.2f, por lo tanto tienes sobrepeso.\n", IMC);
    }

    //clasificaci�n del IMC basandonos en la clasificaci�n: obeso
    else if (IMC >= 30 && IMC < 35) {
        printf("Tu IMC es: %.2f, por lo tanto tienes obesidad de tipo 1.\n", IMC);
    }
    else if (IMC >= 35 && IMC < 40) {
        printf("Tu IMC es: %.2f, por lo tanto tienes obesidad de tipo 2.\n", IMC);
    }

    //clasificaci�n del IMC basandonos en la clasificaci�n: obeso morbido
    else {
        printf("Tu IMC es: %.2f, por lo tanto tienes obesidad m�rbida.\n", IMC);
    }

    return 0;
}
