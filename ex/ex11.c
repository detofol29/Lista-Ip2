#include <stdio.h>
#include <math.h>

int main(){

    double x, function;
    printf("Digite o valor de X: ");
    scanf("%lf", &x);

    function = 8 / (2 - x);

    printf("O resultado da funcao eh: %lf", function);


    return 0;
}