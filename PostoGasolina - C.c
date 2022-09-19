
#include <stdio.h>


int main(){

    int combustivel, alcool, gasolina, diesel;


    alcool = 0;
    gasolina = 0;
    diesel = 0;

    do{

        printf("Informe um codigo (1, 2, 3) ou 4 para parar: ");
        scanf("%d", &combustivel);


        switch(combustivel){

        case 1:
            alcool++;
            break;
        case 2:
            gasolina++;
            break;
        case 3:
            diesel++;
            break;
        }
    }while (combustivel != 4);

        printf("\nMUITO OBRIGADO!");
        printf("\nAlcool: %d", alcool);
        printf("\nGasolina: %d", gasolina);
        printf("\nDiesel: %d\n", diesel);




return 0;
}
