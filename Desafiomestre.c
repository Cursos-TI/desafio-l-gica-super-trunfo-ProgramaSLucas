#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int resultado1, resultado2;
    char primeiroAtributo, segundoAtributo;
    char alemanha1, alemanha2, brasil1, brasil2;

    //Gerar número aleatório
    srand(time(0));
    alemanha1 = 1;//rand() % 100 + 1; //Número entre 1 a 100
    alemanha2 = 0;//rand() % 100 + 1; //Número entre 1 a 100
    brasil1 = 1;//rand() % 100 + 1; //Número entre 1 a 100
    brasil2 = 0;//rand() % 100 + 1; //Número entre 1 a 100

    //Inicio do jogo
    printf("Bem-vindo ao jogo!\n");
    printf("Escolha o primeiro atributo.\n");
    printf("A. Alemanha\n");
    printf("B. Brasil\n");

    printf("Escolha a comparação: \n");
    scanf("%c", &primeiroAtributo);

    switch (primeiroAtributo)
    {
        case 'A':
        case 'a':
        printf("Voce escolheu a opção Alemanha!\n");
        resultado1 = alemanha1 > alemanha2 ? 1 : 0;
        break;
        case 'B':
        case 'b':
        printf("Você escolheu a opção Brasil!\n");
        resultado1 = brasil1 > brasil2 ? 1: 0;
        break;
    default:
        printf("Opção de jogo inválida\n");
        break;
    }

    printf("Escolha o segundo atributo.\n");
    printf("Você deve escolher um atributo diferente do primeiro.\n");
    printf("A. Alemanha\n");
    printf("B. Brasil\n");

    printf("Escolha a comparação: ");
    scanf(" %c", &segundoAtributo);

    if(primeiroAtributo == segundoAtributo)
    {   printf("Você escolheu o mesmo atributo!\n");
    } else {
        switch (segundoAtributo)
    {   
        case 'A':
        case 'a':
        printf("Voce escolheu a opção Alemanha!\n");
        resultado2 = alemanha1 > alemanha2 ? 1 : 0;
        break;
        case 'B':
        case 'b':
        printf("Você escolheu a opção Brasil!\n");
        resultado2 = brasil1 > brasil2 ? 1: 0;
        break;
    default:
        printf("Opção de jogo inválida\n");
        break;

    }

    if (resultado1 && resultado2)
    {   printf("Parabéns, você venceu!\n");

    } else if (resultado1 != resultado2){
        printf("Empatou!\n");
    }
     else {
        printf("Que pena, você perdeu!\n");
    }
    }
}