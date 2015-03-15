// Ler uma quantidade de minutos e informar em hh:mm.
#include <stdio.h>

int main(){
	int horas, minutos, input;
	printf("Entre com uma quantidade de minutos: ");
	scanf("%d",&input);
	horas = input / 60;
	minutos = input % 60;
	printf("\n%d minutos equivalem a %d:%d.\n\n",input,horas,minutos);
	system("pause");
	return 0;
	}