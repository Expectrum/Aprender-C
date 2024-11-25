#include <stdio.h>

void main(){

    float temp;

    printf("Que temperatura hace? ");
    scanf("%f", &temp);

    if(temp == 0){
        printf("\nNi frio ni calor");
    }
    else if(temp < 0){
        printf("\nBajo zero");
    }
    else if(temp > 0){
        printf("\nCalor tropical");
    }
}


getch();
