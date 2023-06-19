#include<stdio.h>
#include"operaciones.h"
    float num1;
 float num2;
 float suma;



int main (){

    printf("Ingrese el primer numero: ");
    scanf("%f", &num1);

    printf("Ingrese el segundo numero: ");
    scanf("%f", &num2);

    sumar(&num1, &num2, &suma);

    printf("El resultado de la suma es: %f\n", suma);

return 0;
}
