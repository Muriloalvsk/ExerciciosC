#include <stdio.h>
#include <locale.h>

int main(){

    double x, y;


    do{
        printf("\nDigite o valor de X: ");
        scanf("%lf", &x);

        printf("\nDigite o valor de Y: ");
        scanf("%lf", &y);


        if(x > 0 && y < 0){
         printf("\nQuadrante Q4");
        }
        else if(x > 0 && y > 0){
         printf("\nQuadrante Q1");
        }
        else if(x < 0 && y > 0){
        printf("\nQuadrante Q2");
        }
        else if(x < 0 && y < 0){
        printf("\nQuadrante Q3");
        }
        else{
        printf("\nOrigem! Programa encerrado!");
        }

    }while(x != 0 || y != 0);





return 0;
}
