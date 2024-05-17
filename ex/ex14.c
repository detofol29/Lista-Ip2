#include <stdio.h>

int main(){

    int precoInicial, precoFinal;
    printf("Digite o preco inicial: ");
    scanf("%d", &precoInicial);
     for(int i = 0; i < 4; i++)
     {
        printf("Deseja adicionar modificacoes no carro?\n 1 - Ar-Condicionado\n 2 - Pintura metalica\n 3 - Vidro eletrico\n 4 - Direcao Hidraulica\n 5 - nenhum");
        int resposta;
        scanf("%d", &resposta);
        if(resposta == 5){break;}
        if(resposta == 1){precoInicial += 1750;}
        if(resposta == 2){precoInicial += 800;}
        if(resposta == 3){precoInicial += 1200;}
        if(resposta == 4){precoInicial += 2000;}

     }

    
    printf("Valor final: %d", precoInicial);

    return 0;
}