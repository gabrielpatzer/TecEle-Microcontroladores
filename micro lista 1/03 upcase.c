// Ler um texto e transformar todas letras minúsculas em maiúsculas.
#include <stdio.h>

int main(){
	// Leitura do texto de entrada
	char texto[80];
	printf("Digite uma frase a ser processada:\n> ");
	gets(texto);
	// Transformação das letras a minúsculas
	int pos;
	for (pos=0 ; pos < strlen(texto) ; pos++)
		if (texto[pos] >= 'a' && texto[pos] <= 'z')
			texto[pos] -= 32;
	// Impressão do resultado
	printf("\n\nTexto ap%cs processamento:\n> %s\n\n",162,texto);
	system("pause");
	return 0;
	}