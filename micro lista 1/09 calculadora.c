// Criar uma calculadora de dois operandos. A operação deve ser selecionada através de um menu.
#include <stdio.h>
int main(){
	float op1, op2, resultado;
	int escolha=0;
	while (escolha != 5){
		menu();
		scanf("%d",&escolha);
		printf("Digite o 1o operando: ");
		scanf("%d",&op1);
		printf("Digite o 2o operando: ");
		scanf("%d",&op2);
		switch(escolha){
			case 1: resultado = op1+op2;
					printf ("%.2f + %.2f = %.2f\n\n",op1,op2,resultado);
					break;
			case 2: resultado = op1-op2;
					printf ("%.2f - %.2f = %.2f\n\n",op1,op2,resultado);
					break;
			case 3: resultado = op1*op2;
					printf ("%.2f * %.2f = %.2f\n\n",op1,op2,resultado);
					break;
			case 4: if (op2 != 0){
						resultado = op1/op2;
						printf ("%.2f / %.2f = %.2f\n\n",op1,op2,resultado);
					}else
						printf("Nao %c poss%cvel dividir por zero.\n",130,161);
					break;
			case 5: printf ("Encerrando ...\n");
					break;
			default: printf("Op%cao inv%clida\n",135,160);
		}
		system ("pause");
	}
}

void menu(){
	system("cls");
	char r=205;
	char linha[30];
	int n;
	for (n=0;n<30;n++) linha[n]=r;
	printf("\n\n\t\t%c%s%c",201,linha,187);
	printf("\n\t\t%c\t1 - Soma\t\t%c\t",186,186);
	printf("\n\t\t%c\t2 - Subtra%cao\t\t%c\t",186,135,186);
	printf("\n\t\t%c\t3 - Multiplica%cao\t\t%c\t",186,135,186);
	printf("\n\t\t%c\t4 - Divisao\t\t%c\t",186,186);
	printf("\n\t\t%c\t5 - Sair\t\t%c\t",186,186);
	printf("\n\t\t%c%s%c",201,linha,187);
	// gotoxy();
}