#include <stdio.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL, ""); //configurem el UTF-8

    int mes, ano; //El 'ano' se refiere a año

    printf("Entra un mes con el numero que le corrsponde: ");
    scanf("%d", &mes);

    printf("\nEntra a que año corresponde este mes: ");
    scanf("%d", &ano);

    switch(mes){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("El mes numero %d, tiene 31 dias\n", mes);
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            printf("El mes numero %d, tiene 30 dias\n", mes);
            break;

        case 2:
            if(ano % 4 == 0 && ano % 100 !=0 || ano % 400 == 0){
                printf("El mes de febrero durante el año %d, tiene 29 dias", ano);
            }
            else{
                printf("El mes de febrero durante el año %d, tiene 28 dias", ano);
            }
            break;
        default:
            printf("Ingresa un numero valido");
    }

    getch();

}
