#include <stdio.h>

int main(){

    float quilometros;
    float litros;
    
    printf("informe os quilometros:");
    scanf("%f", & quilometros);

    printf("informe os litros:");
    scanf("%f", & litros);
    float media=quilometros/litros;
    printf("%f",media);
 }