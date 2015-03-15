// Ler uma data de nascimento e dizer qual é a idade atual.
#include <stdio.h>

int main(){
	int Nano,aniversario,idade;
	printf("Em que ano voc%c nasceu? ",136);
	scanf("%d",&Nano);
	printf("Voc%c j%c fez anivers%crio este ano (Digite 0 caso nao e 1 caso sim.)? ",136,160,160);
	scanf("%d",&aniversario);
	if (aniversario)
		idade = 2015 - Nano;
	else
		idade = 2015 -1 - Nano;
	printf("\nVoc%c tem, atualmente, %d anos.\n\n",136,idade);
	system("pause");
	return 0;
	}
