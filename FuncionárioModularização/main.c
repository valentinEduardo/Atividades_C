#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef

struct{
int hora, minuto, segundo;
}TipoHorario;

 typedef

    struct{
   	int matricula, salario ;
   	TipoHorario Entrada, Saida;

   }TipoCadastro;

   typedef

   struct{
   	int setor;
   	TipoCadastro funcionario[5], gerente;
   }TipoSetores;

   TipoSetores setor[5];

   int i, i2;

void inicializaVetorFuncionarios(){


	for(i=0;i<5;i++){
    setor[i].setor=i+1;
    setor[i].gerente.matricula=-1;
    for(i2=0;i2<5;i2++){
    setor[i].funcionario[i2].matricula=-1;
    }
	}
}


   int verificarHorario(TipoHorario horario){

	// retorna 0 se o horário for inválido ou 1 se for válido

	if ((horario.hora>0 && horario.hora<=23) && (horario.minuto>0 && horario.minuto<=59) && (horario.segundo>0 && horario.segundo<=59)){
       return 1;
	}else{
	return 0;
	}
   }

   int cadastrarGerente(TipoSetores func){
       i=0;
    while (setor[i].gerente.matricula!=-1 && i<5){
    	i++;
	}

	if(setor[i].gerente.matricula==-1){
		setor[i] = func;
		return 1;
	}
	return 0;

}

void consultarGerente(){
	int i3, verificacao;
i3=0;
	printf("Dígite o setor do Gerente que deseja checar os dados\n");
        scanf("%d",&verificacao);

        while ((setor[i3].setor!=verificacao) && (i3<5)) {
i3++;
        }
        i3=i3;

	 if (setor[i3].setor==verificacao){
        printf("\nA matrícula desse gerente é %d",setor[i3].gerente.matricula);
        printf("\nO horário de entrada desse Gerente é %d:%d:%d\n", setor[i3].gerente.Entrada.hora,setor[i3].gerente.Entrada.minuto,setor[i3].gerente.Entrada.segundo);
        printf("\nO horário de saída desse Gerente é %d:%d:%d\n",setor[i3].gerente.Saida.hora,setor[i3].gerente.Saida.minuto,setor[i3].gerente.Saida.segundo);
        printf("\nO salário desse Gerente é: %d\n",setor[i3].gerente.salario);
    } else {

	 printf("Funcionario não encontrado\n");
}
}



int main()
{
    int eValido, i, mat, opcao, retorno;
	TipoSetores pessoa;
    int posicao;
    int opc,op;
    inicializaVetorFuncionarios();
    i2=0;

    setlocale(LC_ALL, "Portuguese_Brazil");
do{
    printf("\t\t  Bem Vindo!\n\t\tO Que Deseja?\n");

    printf("\t|1-Área dos Gerentes e Setores|\n");
    printf("\t|2-    Área dos Funcionário   |\n");
    printf("\t|3-     Encerrar programa     |\n");
    scanf("%d",&opc);

    switch (opc)
    {
    case 1 :
        do{
    printf("\t|1-  Cadastrar Gerentes e setores|\n");
    printf("\t|2-      Consultar Gerente       |\n");
    printf("\t|3-            Sair              |\n");
    scanf("%d",&op);
    switch (op)
    {
    case 1 :


    printf("cadastre a matricula do gerente do %d° setor\n",setor[i2].setor);
	scanf("%d",&pessoa.gerente.matricula);

    do {
                printf("Digite o horário de entrada no formato: Hora Minutos Segundos\n");
                scanf("%d %d %d",&pessoa.gerente.Entrada.hora,&pessoa.gerente.Entrada.minuto,&pessoa.gerente.Entrada.segundo);
				eValido = verificarHorario(pessoa.gerente.Entrada);
				if (eValido==0) {
                printf("Horário de Entrada é inválido! Digite novamente\n");
				}
		    }while(eValido == 0);

		    do {
                printf("Digite o horário de saída no formato: Hora Minutos Segundos\n");
                scanf("%d %d %d",&pessoa.gerente.Saida.hora,&pessoa.gerente.Saida.minuto,&pessoa.gerente.Saida.segundo);
				eValido = verificarHorario(pessoa.gerente.Saida);
				if (eValido == 0){
                printf("Horário de Saida é inválido! Digite novamente\n");
				}
		    }while(eValido == 0);

		    printf("cadastre o salário do gerente do %d° setor\n", setor[i2].setor);
	        scanf("%d",&pessoa.gerente.salario);

	        retorno = cadastrarGerente(pessoa);
			if (retorno==1){
				printf("funcionario cadastrado com sucesso\n");
			}else{
				printf("Não tem mais vaga\n");
			}
			i2++;
        break;
    case 2:
     consultarGerente();
        break;
    case 3:

        printf("\tSaindo\n");
        break;
    default:
    printf("Opção inválida!\n");
    }
        }while(op!=3);
        break;
    case 2 :
        do{
    printf("\t|1-  Cadastrar Funcionário  |\n");
    printf("\t|2-  Consultar Funcionário  |\n");
    printf("\t|3-           Sair          |\n");
    scanf("%d",&opcao);

    switch (opcao)
    {
    case 1 :

        break;
    case 2:

        break;
    case 3:

        printf("\tSaindo\n");
        break;
    default:

    printf("\nOpção inválida!\n");
    }
        }while(opcao!=3);
        break;
    case 3 :

        printf("\tEncerrando\n\n");

        break;
    default :
        printf("\nOpção inválida!\n");
    }
}while(opc!=3);


getchar();
printf("Digite qualquer tecla para sair\n");
getchar();
    return 0;
}
