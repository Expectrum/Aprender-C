#include <stdio.h>

int main() {
    int tabla, medidaListon, totalListon, restante;

    printf("Escribe la medida de la tabla en cm: ");
    if( scanf("%d", &tabla) !=1 ){
        printf("Introduce un numero entero valido");
    }

    printf("De que medida quieres los listones? ");
    if(scanf("%d", &medidaListon) !=1){
        printf("Introduce un numero entero valido");
    }

    totalListon = tabla / medidaListon;

    restante = tabla % medidaListon;

    printf("Total de listones a hacer: %d", totalListon);
    printf("\nTotal de tabla sobrante: %dcm", restante);
}
