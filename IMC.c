#include <stdio.h>

int main(){

    float peso;
    float altura;
    
    printf("informe seu peso:");
    scanf("%f", & peso);

    printf("informe sua altura:");
    scanf("%f", & altura);
    float IMC=peso/(altura*altura);
    printf("%f",IMC);
 }