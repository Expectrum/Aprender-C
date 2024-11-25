#include <stdio.h>

int calcPalillos(int numero){
    int palillos [] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6}; //lista con los palillos necesarios para los digitos 0-9 en orden
    return palillos[numero];
}

int main(){
    int numero;
    int resultado, mod, totalPalillos;

    printf("Entre un numero entre 0-99: "); //pedimos una entrada al usuario
    if(scanf("%d", &numero) !=1){ //validamos que la entrada sea un digito
        printf("Entrada no valida, debe de entrar un entero\n");
    }

    if(numero < 0 || numero > 99){ //validamos que este dentro del rango de 0-99
        printf("Numero fuera de rango\n");
    }

    if(numero < 10){ //variable para los menores de 10
        //decimos el total de palillos necesarios para los menores de 10
        printf("El numero total de palillos necesarios para el numero %d son: %d", numero, calcPalillos(numero));
    }
    else{ //variable para los mayores de 9
        resultado = numero / 10; //calculamos las decimas
        mod = numero % 10; //calculamos las unidades
        totalPalillos = calcPalillos(resultado) + calcPalillos(mod); //sumamos los palillos necesarios para hacer el numero

        printf("El numero total de palillos necesarios para el numero %d son: %d", numero, totalPalillos);
    }
    return 0;
}
