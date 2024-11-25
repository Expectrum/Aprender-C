#include <stdio.h>

int  main(){
    int entero;
    float numero, fraccionaria;

    printf("Entra un numero decimal: ");
    if( scanf("%f", &numero) !=1 ){
        printf("Entre un numero valido");
    }
    else{

        entero = numero; //nos quedamos con la parte entera del numero
        fraccionaria = numero - entero; //nos quedamos con la parte fraccionaria

        printf("La parte entera es: %d", entero);

        printf("\nLa parte fraccionaria es: %f", fraccionaria);
    }
    return 0;
}
