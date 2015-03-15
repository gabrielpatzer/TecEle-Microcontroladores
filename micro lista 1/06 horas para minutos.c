// Ler uma quantidade de horas e informar em minutos.
#include <stdio.h>

int main(){
	int horas, minutos;
	printf("Entre com uma quantidade de horas: ");
	scanf("%d",&horas);
	minutos = horas * 60;
	printf("\n%d horas equivalem a %d minutos.\n\n",horas,minutos);
	system("pause");
	return 0;
	}