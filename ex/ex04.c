#include <stdio.h>
#include <math.h>
int main()
{
    float num, resultado;
    printf("\nDigite o valor do numero: ");
    scanf("%f", &num);
    if (num >= 0){resultado = sqrt(num);}
    else{resultado = num * num;}
    printf("O resultado eh %f", resultado);
    
    return 0;
}