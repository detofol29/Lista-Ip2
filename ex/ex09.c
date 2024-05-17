#include <stdio.h>

int main(){

    float valorCompra, valorVenda;
    printf("Digite o valor da compra: ");
    scanf("%f",  &valorCompra);
    if(valorCompra < 10){
        valorVenda = valorCompra + valorCompra * 0.7;
    }

    if(valorCompra >= 10 && valorCompra < 30){
        valorVenda = valorCompra + valorCompra * 0.5;
    }

    if(valorCompra >= 30 && valorCompra < 50){
        valorVenda = valorCompra + valorCompra * 0.4;
    }

    if(valorCompra >= 50){
        valorVenda = valorCompra + valorCompra * 0.3;
    }

    printf("O valor da venda eh %f", valorVenda);



    return 0;
}