// Criar uma calculadora de dois operandos. A operação deve ser selecionada através de um menu.
#include <stdio.h>
void menu();

int main(){
	float op1, op2, resultado;
	int escolha=0;
	while (escolha != 5){
		menu();
		scanf("%d",&escolha);
		if (escolha != 5){
            printf("\n  > Digite o 1o operando: ");
            scanf("%f",&op1);
            printf("  > Digite o 2o operando: ");
            scanf("%f",&op2);
        }
		switch(escolha){
			case 1: resultado = op1+op2;
					printf ("\n\t%.2f + %.2f = %.2f\n\n",op1,op2,resultado);
					break;
			case 2: resultado = op1-op2;
					printf ("\n\t%.2f - %.2f = %.2f\n\n",op1,op2,resultado);
					break;
			case 3: resultado = op1*op2;
					printf ("\n\t%.2f * %.2f = %.2f\n\n",op1,op2,resultado);
					break;
			case 4: if (op2 != 0){
						resultado = op1/op2;
						printf ("\n\t%.2f / %.2f = %.2f\n\n",op1,op2,resultado);
					}else
						printf("\n\tNao %c poss%cvel dividir por zero.\n\n",130,161);
					break;
			case 5: printf ("\n\tEncerrando ...\n\n");
					break;
			default: printf("\n\tOp%cao inv%clida\n",135,160);
		}
		system ("pause");
	}
}

void menu(){
	system("cls");
	char r=205;
	char linha[40];
	int n;
	for (n=0;n<39;n++) linha[n]=r;
	linha[39] = 0;
	printf("\n\n\t\t%c%s%c",201,linha,187);
	printf("\n\t\t%c\t\t\t\t\t%c",186,186);
	printf("\n\t\t%c\t     Calculadora em C\t\t%c",186,186);
	printf("\n\t\t%c\t\t\t\t\t%c",186,186);
	printf("\n\t\t%c\t1 - Soma\t\t\t%c",186,186);
	printf("\n\t\t%c\t2 - Subtra%cao\t\t\t%c",186,135,186);
	printf("\n\t\t%c\t3 - Multiplica%cao\t\t%c",186,135,186);
	printf("\n\t\t%c\t4 - Divisao\t\t\t%c",186,186);
	printf("\n\t\t%c\t5 - Sair\t\t\t%c",186,186);
	printf("\n\t\t%c\t\t\t\t\t%c",186,186);
	printf("\n\t\t%c%s%c",200,linha,188);
	printf("\n\n  > Escolha uma opera%cao: ",135);
}
