#include <stdio.h>

int main(){

    float comprimento;
    float largura;
    float preco;
    
    printf("informe o comprimento:");
    scanf("%f", & comprimento);

    printf("informe a largura:");
    scanf("%f", & largura);

    printf("informe o preco:");
    scanf("%f", & preco);

    float valor;
    valor=preco*(comprimento*largura);
    printf("%f",valor);
 }