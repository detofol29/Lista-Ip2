#include <stdio.h>

int main()
{
    int num;
    printf("\nDigite um valor: ");
    scanf("%d", &num);
    if(num > 0){printf("O valor eh positivo!");}
    else if(num < 0){printf("O valor eh negativo!");}
    else{printf("O valor eh nulo");}
    return 0;
}