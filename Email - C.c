#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL,"Portuguese");

    char email[30];
    int c = 0;

    printf("Digite seu email do IFSP: ");
    gets(email);


    for(int i=0; email[i]!='@'; i++){
        c = i;
    }

    if(c < 4){
        printf("\nSeu email %s é inválido\n", email);
        exit(0);
    }

    if(email[0]=='0'||email[0]=='1'||email[0]=='2'||email[0]=='3'||email[0]=='4'||email[0]== '5'||email[0]=='6'||email[0]=='7'||email[0]=='8'||email[0]=='9'){
        printf("\nSeu email %s é inválido\n", email);
        exit(0);
    }

    char dominio[] = "@aluno.ifsp.edu.br";
    char *dominio1 = strstr(email, dominio);

    if(dominio1 == NULL){
        printf("\nSeu email %s é inválido\n", email);
        exit(0);
    }

    printf("\nSeu email %s é válido\n", email);
    exit (0);

return 0;
}
