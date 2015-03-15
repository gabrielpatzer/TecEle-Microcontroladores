Ler um nome e invertê-lo.
#include <stdio.h>

int main(){
	// Leitura do texto de entrada
	char texto[80];
	printf("Digite um texto: \n");
	gets(texto);
	// Percorre o vetor ao contrário para impressão
	int pos;
	for (pos= strlen(texto)-1 ; pos >= 0 ; pos--)
		printf("%c",texto[pos]);
	printf("\n\n");
	system("pause");
	return 0;
	}