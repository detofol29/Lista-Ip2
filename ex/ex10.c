#include <stdio.h>

int main(){
    int preco, regiao, retorno;
    printf("Digite para qual regiao vossa senhoria vai viajar: ");
    scanf("%d", &regiao);
    printf("Digite 1 para ida e volta, ou digite 2 para ida somente: ");
    scanf("%d", &retorno);

    // Regiao norte (01)
    if(regiao == 1 && retorno == 1){preco = 900;}
    if(regiao == 1 && retorno == 2){preco = 500;}

    //Regiao Nordeste 02

    if(regiao == 2 && retorno == 1){preco = 650;}
    if(regiao == 2 && retorno == 2){preco = 350;}

    //Regiao Centro-Oeste 03

    if(regiao == 3 && retorno == 1){preco = 600;}
    if(regiao == 3 && retorno == 2){preco = 350;}

    //Regiao Sul 04

    if(regiao == 4 && retorno == 1){preco = 550;}
    if(regiao == 4 && retorno == 2){preco = 300;}

    printf("Valor da viagem: %d", preco);

    return 0;
}