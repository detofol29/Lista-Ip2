#include <stdio.h>
#include <math.h>
int main()
{
    int num;
    printf("\nDigite o valor do numero: ");
    scanf("%d", &num);
    if(num % 5 == 0){printf("O numero eh divisivel por 5");}
    else{printf("O numero nao eh divisivel por 5");}    
    
    return 0;
}