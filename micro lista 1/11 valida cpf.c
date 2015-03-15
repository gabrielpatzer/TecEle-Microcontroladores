// Ler um CPF e dizer se é válido ou inválido.
#include <stdio.h>

int main(){
    char cpf[20];
    int total = 0, controle, dv1, dv2;
    printf ("Digite seu cpf, utilize apenas n%cmeros:\n\t> ",163);
    gets(cpf);
    if (strlen(cpf) == 11){
          if (strcmp(cpf,"11111111111") == 0 || strcmp(cpf,"22222222222") == 0 || 
              strcmp(cpf,"33333333333") == 0 || strcmp(cpf,"44444444444") == 0 || 
              strcmp(cpf,"55555555555") == 0 || strcmp(cpf,"66666666666") == 0 || 
              strcmp(cpf,"77777777777") == 0 || strcmp(cpf,"88888888888") == 0 || 
              strcmp(cpf,"99999999999") == 0 || strcmp(cpf,"00000000000") == 0)
              printf("CPF inv%clido\n",160);
          else{
                  for (controle=10; controle > 1; controle --){
                      total += (cpf[10-controle]-'0') * controle;
                      dv1 = total % 11;
                      if (dv1 < 2)
                         dv1 = 0;
                      else
                         dv1 = 11-dv1;
                      }
                  total = 0;
                  for (controle=11; controle > 1; controle --){
                      total += (cpf[11-controle] - '0') * controle;
                      dv2 = total % 11;
                      if (dv2 < 2)
                         dv2 = 0;
                      else
                         dv2 = 11-dv2;
                      }
                  if ((dv1 == (cpf[9])-'0') && (dv2 == (cpf[10]-'0')))
                     printf("CPF v%clido\n",160);
                  else
                     printf("CPF inv%clido\n",160);    
                  }
              }
    else
          printf("Digite um CPF utilizando apenas n%cmeros.\n",163);
//    printf("dv1 = %d\n",dv1);
//    printf("dv2 = %d\n",dv2);
    system("pause");
}
