#include <stdio.h>

    int main() {
    printf ("Desafio logica super trunfo!\n");
   
    int populacaoA = 12325000;
    int populacaoB = 6748000;

    if (populacaoA > populacaoB) {
        printf("Cidade 1 tem maior população.\n");
     } else {
        printf("Cidade 2 tem maior população.\n");
     }
     
     int opcao;
     float CartaA = 165368.91;
     float CartaB = 111328.23;
     

    printf("Escolha uma opção: \n");
    printf("1. Digite se a CartaA é maior: \n");
    printf("2. Digite se a CartaB é maior: \n");
    printf("3. Digite se houve empate: \n");
    scanf("%d", &opcao);

    switch (opcao) {
     case 1:
        printf("CartaA maior : 1\n");
        break;
     case 2:
        printf("CartaB maior : 2\n");
        break;
    case 3:
    printf(" Empate: 3 \n");
        break;

     }
     if(CartaA > CartaB){
        printf("CartaA venceu!\n");
     }
     else if(CartaB > CartaA){
        printf("CartaB venceu!\n");
    }
     else {
        printf("Houve um empate\n");
     }


    return 0;
}
