#include <stdio.h>

int main() {
    float a, b;

    printf("Entra un numero: ");
    if(scanf("%f", &a) !=1){
        printf("Entre un numero valido");
    }

    printf("Entra un segundo numero: ");
    if(scanf("%f", &b) !=1){
        printf(("Entre un numero valido"));
    }

    printf("El numero a = %f y el numero b = %f", a, b);
    printf("\nSi lo invertimos: ");

    a = a + b;
    b = a - b;
    a = a - b;

    printf("\nEl numero a = %f y el numero b = %f", a, b );
}
