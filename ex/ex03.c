#include <stdio.h>

int main()
{
    int num1, num2, soma;
    printf("\nDigite o valor do primeiro numero: ");
    scanf("%d", &num1);
    printf("\nDigite o valor do segundo numero: ");
    scanf("%d", &num2);
    soma = num1 + num2;
    if(soma > 20){soma += 8;}
    if(soma <= 20){soma -= 5;}

    printf("O resultado eh %d", soma);

    
    return 0;
}