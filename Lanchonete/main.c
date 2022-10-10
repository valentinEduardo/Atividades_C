#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
 setlocale(LC_ALL, "Portuguese_Brazil");
 float pedido, media, maiorpreco, total, preco, mediapedidos, mediafinal, acima;
 char nome[30], nomemaior[30];
 int opcao, quantidade,senha,op, cachorroquente, batata, agua, refrigerante, numpedidos, hamburguer;

   cachorroquente=0;
   batata = 0;
   agua = 0;
   hamburguer = 0;
   refrigerante = 0;

while (op !=3){

   printf ("\nBem vindo ao Menu da lanchonete BOM LANCHE");
               printf ("\n ");
               printf (" Seleione dentre as opções");
               printf ("\n ");
               printf ("| 1-  Menu de pedidos    |");
               printf ("\n ");
               printf ("| 2- Menu de estatisticas|");
               printf ("\n ");
               printf ("| 3-  Encerrar programa  |");
               printf ("\n ");
               scanf  ("%d",&op);


   if (op==1){


    printf("Bem vindo ao Menu de pedidos da lanchonete BOM LANCHE");
               printf("\n ");


               printf("\nQual seu nome? Ou Escreva finalizar para fechar\n");
               scanf("%s",&nome);
       do{
       printf("\n ");
printf("Escolha dentre as opções colocando o código");
               printf("\n ");
    printf("\n---------------------------------\t");
    printf("\n|     Lanchonete BomLanche      |\t");
    printf("\n=================================\t");
    printf("\n|COD |     PRODUTO     |  VALOR |\t");
    printf("\n---------------------------------\t");
    printf("\n|101 | Cachorro Quente | R$ 2,50|\t");
    printf("\n|102 | Hamburger       | R$ 5,00|\t");
    printf("\n|103 | Batata fritas   | R$ 3,50|\t");
    printf("\n|105 | Água            | R$ 2,50|\t");
    printf("\n|106 | Refrigerante    | R$ 3,50|\t");
    printf("\n=================================\t");
    printf("\n|     (0) ENCERRAR PEDIDO       |\t");
    printf("\n---------------------------------\t");

            printf("\nDigite a opçao\n");
            scanf("%d",&opcao);

            if (opcao==101){

            printf ("Quantas unidades\n?");
            scanf ("%d",&quantidade);
            cachorroquente = quantidade;
            preco = preco +(2.50 * quantidade);
            printf("Deseja escolher mais alguma coisa\n?");
            }

            if (opcao==102){

            printf ("Quantas unidades\n?");
            scanf ("%d",&quantidade);
            hamburguer = quantidade;
            preco = preco + (5.00*quantidade);
            printf("Deseja escolher mais alguma coisa\n?");
            }

            if (opcao==103){

            printf ("Quantas unidades\n?");
            scanf ("%d",&quantidade);
            batata = quantidade;
            preco = preco +(3.50*quantidade);
            printf("Deseja escolher mais alguma coisa\n?");
            }

            if (opcao==104){

            printf ("Quantas unidades?\n");
            scanf ("%d",&quantidade);
            agua = quantidade;
            preco = preco +(2.50*quantidade);
            printf("Deseja escolher mais alguma coisa\n?");
            }

            if (opcao==105){

            printf ("Quantas unidades\n?");
            scanf ("%d",&quantidade);
            refrigerante = quantidade;
            preco = preco+(3.50*quantidade);
            printf("Deseja escolher mais alguma coisa\n?");
            }



   } while (opcao!=0);

   if (preco == 0) {
   printf ("você não fez nenhum pedido");
   }
   else {
   printf("O seu pedido ficou: ");
   }
   if (cachorroquente>0){
   printf("foram %d cachorro(s)-quente(s) ", cachorroquente);
   }
   if (hamburguer>0){
   printf ("foram  %d hamburguer(s) ", hamburguer);
   }
   if (batata>0) {
   printf ("foram  %d batata(s) ", batata);
   }
   if (agua>0) {
   printf ("foram  %d água(s) ",agua);
   }
   if (refrigerante>0){
    printf("foram  %d refrigerante(s) ", refrigerante);
   }
   printf(" O total do seu pedido foi:R$ %f ",preco);


   printf("\n");

    pedido = preco;

   if (pedido>maiorpreco){
   maiorpreco = pedido;
   nomemaior[30] = nome[30];
   }

   if (preco>0){
   numpedidos= numpedidos+1;
   }

   if (preco> 15){
   acima= acima+1;
   }

   media = media +pedido;
   preco = 0;

   refrigerante =0;
   batata=0;
   hamburguer=0;
   cachorroquente=0;
   agua=0;


   }


   if (op==2) {
       if (numpedidos>0){
       while (senha!=4) {
       printf("\nBem vindo a área de administração \n");

            printf("1- Exibir média dos pedidos \n");

            printf("2- Exibir pedidos acima de 15 reais \n");


            printf("3- Exibir pedido de maior valor \n");

            printf("4- encerrar \n");


            scanf("%d",&senha);

            if (senha==1){

            mediafinal = media/numpedidos;

            printf("A media dos pedidos foi: %f", mediafinal);
            }

            if (senha== 2) {

            mediapedidos = (acima*100)/numpedidos;
            printf("a porcentagem de pedidos acima de R$ 15,00 reais foi: %f", mediapedidos);
            }

            if (senha== 3) {
            printf(" o pedido de maior valor foi:  %s de %f", nomemaior[30], maiorpreco);
            }
       }
   }
}
}
    system ("pause");
    return 0;
}
