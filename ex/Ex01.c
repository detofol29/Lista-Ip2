#include <stdio.h>

int main()
{
    int num;
    printf("\nDigite um valor: ");
    scanf("%d", &num);
    if(num % 2 == 0){
        printf("\nO numero eh par!");
    }else{
        printf("\n O numero eh impar!");
    }

    return 0;
}