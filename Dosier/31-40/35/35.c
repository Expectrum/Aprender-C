#include <stdio.h>

void main(){
    int num;

    printf("Escribe un numero para saber si es par o impar, que sean numeros enteros: ");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("\nEl numero %d es par \n", num);
    }

    else{
        printf("\nEl numero %d es impar \n", num);
    }
}

getch();
