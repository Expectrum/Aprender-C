#include <stdio.h>

int main() {
    float val1, val2, val3, media;

    printf("Entra el primer numero: ");
    if(scanf("%f", &val1) !=1){
        printf("Entre un numero real valido");
        return 1;
    }

    printf("Entra el segundo numero: ");
    if(scanf("%f", &val2) !=1){
        printf("Entre un numero real valido");
        return 1;
    }

    printf("Entra el tercer numero: ");
    if(scanf("%f", &val3) !=1){
        printf("Entre un numero real valido");
        return 1;
    }

    media = (val1 + val2 + val3) / 3;

    printf("La media de %f, %f i %f, es: %f", val1, val2, val3, media);

    return 0;

}
