// Ler uma data de nascimento e dizer qual é a idade atual.
#include <stdio.h>
#include <time.h>

int main(){
	int Nano,Nmes,Ndia,Hano,Hmes,Hdia,idade;
	char data[11];
	
	// Utilizando a biblioteca time.h para gerar as informações de hoje
    time_t agoraBase;
	struct tm *agora;
	time(&agoraBase);
	agora = localtime(&agoraBase);
	Hano = agora->tm_year;
	Hmes = agora->tm_mon + 1;
	Hdia = agora->tm_mday;
	
	// Processando uma string para extrair a data de nascimento (sem considerar erros do usuário)
	printf("Informe sua data de nascimento (dd/mm/aaaa): ",136);
	gets(data);
	data[2] = 0; data[5] = 0;
	Nano = atoi(&data[6]);
	Nmes = atoi(&data[3]);
	Ndia = atoi(&data[0]);
	
	// verifica aniversário e calcula idade
    if (Nmes == Hmes && Ndia == Hdia)
	   printf("\nParab%cns! Hoje %c o seu anivers%crio!",130,130,160);
	if (Nmes <= Hmes){
	   if (Ndia <= Hdia)
	      idade = 1900 + Hano - Nano;
    }
	else
		idade = 1900 + Hano -1 - Nano;
	printf("\nVoc%c tem, atualmente, %d anos.\n\n",136,idade);
	system("pause");
	return 0;
	}
