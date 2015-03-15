// Ler um valor de ano e informar se é bissexto.
#include <stdio.h>

int main(){
	int ano;
	printf("Entre com um ano: ");
	scanf("%d",&ano);
	if (ano % 400 == 0 || ((ano % 100 != 0) && (ano % 4 == 0)))
		printf("O ano %c bissexto.\n\n",130);
	else
		printf ("O ano nao %c bissexto.\n\n",130);
	system("pause");
	return 0;
	}