// Ler um texto e contar as palavras.
#include <stdio.h>

int main(){
	// Leitura do texto de entrada
	char texto[80];
	printf("Digite uma frase a ser analisada:\n> ");
	gets(texto);
	// Busca e contagem de espaços, considerando um mínimo de 1 palavra.
	int palavras = 1, pos;
	for (pos=0 ; pos < strlen(texto) ; pos++)
		if (texto[pos] == ' ')
			palavras++;
	// Impressão do resultado
	printf("\nForam encontradas %d palavras na frase digitada.\n\n",palavras);
	system("pause");
	return 0;
	}