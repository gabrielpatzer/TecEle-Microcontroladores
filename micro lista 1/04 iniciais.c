// Ler um nome e imprimir as iniciais.
#include <stdio.h>

int main(){
	// Leitura do texto de entrada
	char texto[80];
	printf("Digite seu nome completo: ");
	gets(texto);
	// Impressão de cada letra após um espaço
	printf("> %c",texto[0]);
	int pos;
	for (pos=0 ; pos < strlen(texto) ; pos++)
		if (texto[pos] == ' ')
			printf("%c",texto[pos+1]);
	printf("\n\n");
	system("pause");
	return 0;
	}