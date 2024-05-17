#include <stdio.h>
int main()
{
    int num;
    printf("\nDigite o valor do numero: ");
    scanf("%d", &num);
    if(num > 20 && num < 90){printf("Sim, o numero esta no intervalo selecionado");}
    else{
        printf("O numero digitado nao esta no intervalo selecionado!");
    }
      
    
    return 0;
}