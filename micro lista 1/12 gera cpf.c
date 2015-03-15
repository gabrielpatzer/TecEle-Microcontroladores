// Gerar um CPF válido.
#include <stdio.h>
#include <time.h>

int main (){
    int cpf[11];
    int c, total=0;
    printf ("Gerando CPF:\n\t> ");
    srand(time(NULL));
    for (c=0; c<9 ; c++)
        cpf[c] = rand()%10;
    for (c=10; c > 2 ; c--){
        total += c * cpf[10-c];
        cpf[9] = total%11;
        if (cpf[9] < 2) cpf[9] = 0;
        else cpf[9] = 11 - cpf[9];
        }
    total = 0;
    for (c=11; c > 2 ; c--){
        total += c * cpf[11-c];
        cpf[10] = total%11;
        if (cpf[10] < 2) cpf[10] = 0;
        else cpf[10] = 11 - cpf[10];
        }
    for (c=0; c<3 ;c++)
        printf("%d",cpf[c]);
    printf(".");
    for (c=3; c<6 ;c++)
        printf("%d",cpf[c]);
    printf(".");
    for (c=6; c<9 ;c++)
        printf("%d",cpf[c]);
    printf("-");
    printf("%d%d\n\n",cpf[9],cpf[10]);    
    system("pause");
    return 0;
}
