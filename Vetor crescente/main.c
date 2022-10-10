#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/**QUESTÃO DESAFIO* Elabore um programa que leia um vetor de inteiros de 20 posições e coloque
em ordem crescente, utilizando a seguinte estratégia de ordenação:
a. Selecione o elemento do vetor de 20 posições que apresenta o mesmo valor;
b. Troque este elemento pelo primeiro;
c. Repita estas operações, envolvendo agora apenas os 19 elementos restantes (selecionando o
de menor valor para a segunda posição), depois os 18 elementos (trocando o de menor valor
com a terceira posição) e assim por diante até sobrar somente um elemento, o maior deles.*/


int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    int escolha[20], i, numero, i2;

    for (i=0; i<5;i++){
     printf("\tDigite um número\n");
     scanf("%d", &escolha[i]);
    }
    i2=0;
    for (i=0; i<5;i++){
    if ((escolha[i]>escolha[i2]) && (i2<5)){
    numero=escolha[i];
    escolha[i]=escolha[i2];
    escolha[i2]=numero;
    i2++;
    }
    }
    for (i=0; i<5;i++){
            printf("\n%d\n", escolha[i]);
    }

    getchar();
    printf("\nAperte qualquer tecla para sair\n");
    getchar();

    return 0;
}


