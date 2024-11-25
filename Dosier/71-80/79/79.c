#include <stdio.h>

//definimos la estructura para los sognos
typedef struct{
    char signo[15];
    char elemento[10];
    int dia_inicio, mes_inicio;
    int dia_fin, mes_fin;
}Zodiaco;

//array con los signos del Zodiaco
Zodiaco zodiacos[12] = { //ponemos un 12 ya que hay 12 signos, por lo tanto 12 lineas
    {"Aries", "Fuego", 21, 3, 19, 4},
    {"Tauro", "Tierra", 20, 4, 20, 5},
    {"Geminis", "Aire", 21, 5, 21, 6},
    {"Cancer", "Agua", 22, 6, 22, 7},
    {"Leon", "Fuego", 23, 7, 22, 8},
    {"Virgo", "Tierra", 23, 8, 22, 9},
    {"Balanza", "Aire", 23, 9, 22, 10},
    {"Escorpion", "Agua", 23, 10, 21, 11},
    {"Sagitario", "Fuego", 22, 11, 20, 12},
    {"Capricornio", "Tierra", 21, 12, 19, 1},
    {"Acuario", "Aire", 20, 1, 18, 2},
    {"Piscis", "Agua", 19, 2, 20, 3}
};

//funcion para validar la fecha entrada por el usuario
int validarFecha(int dia, int mes){
    //comprovamos si el mes es valido
    if(mes < 1 || mes > 12){
        printf("Error: el mes %d no es valido debe de ser un numero entre 1-12\n", mes);
        return 0;
    }

    int diaMes[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; //asumimos que febrero siempre tiene 29 dias ya que no afecta en nada
    if(diaMes < 1 || dia > diaMes [mes -1]){
        printf("Error: el dia %d no es valido para el mes %f", dia, mes);
        return 0;
    }

    return 1; //si todo es correcto
}

void encontrarSigno(int dia, int mes){
    for(int i = 0; i < 12; i++){ //por cada linea que buscamos, sumamos una iteracion
        //comprobamos si la fecha esta dentro del intervalo del signo
        if( (mes == zodiacos[i].mes_inicio && dia >= zodiacos[i].dia_inicio ) || //comprobamos si el mes es el mes de inicio del signo y a la vez, el dia es mayor al primer dia del signo
            (mes == zodiacos[i].mes_fin && dia <= zodiacos[i].dia_fin )){  //comprobamos  si el mes final del signo y a la vez si el dia es igual o menor al ultimo dia del signo
            printf("Tu Signo del zodiaco es %s, un signo de tipo %s.\n", zodiacos[i].signo, zodiacos[i].elemento);
            return;
        }
    }
}

int main(){
    int dia, mes;

    //pedimos el dia de nacimiento
    printf("Introduce el dia de tu nacimiento: ");
    scanf("%d", &dia);

    //pedimos el mes de nacimiento
    printf("Introduce tu mes de nacimiento: ");
    scanf("%d", &mes);

    //validamos la fecha
    if(!validarFecha(dia, mes)) {
        return 1;//salimos si la fecha es incorrecta
    }

    //llamamos a la funcion encontrarSigno
    encontrarSigno(dia, mes);

    return 0;
}
