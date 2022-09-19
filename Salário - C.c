    #include <stdio.h>
    #include <locale.h>

    int main(){

    setlocale(LC_ALL,"Portuguese");

    double sal, aumento;

    printf("Digite seu salário: ");
    scanf("%lf", &sal);


    if(sal <= 1000){
        aumento = sal * 0.2;
        sal = sal * 0.2 + sal;
        printf("Seu novo salário é: %.2lf", sal);
        printf("\nAumento = %.2lf", aumento);
        printf("\nPorcentagem = 20 porcento");
    }
    else if(sal > 1000 && sal <= 3000){
        aumento = sal * 0.15;
        sal = sal * 0.15 + sal;
        printf("Seu novo salário é: %.2lf", sal);
        printf("\nAumento = %.2lf", aumento);
        printf("\nPorcentagem = 15 porcento");
    }
    else if(sal > 3000 && sal <= 8000){
        aumento = sal * 0.1;
        sal = sal * 0.1 + sal;
        printf("Seu novo salário é: %.2lf", sal);
        printf("\nAumento = %.2lf", aumento);
        printf("\nPorcentagem = 10 porcento");
    }
    else{
        aumento = sal * 0.5;
        sal = sal * 0.05 + sal;
        printf("Seu novo salário é: %.2lf", sal);
        printf("\nAumento = %.2lf", aumento);
        printf("\nPorcentagem = 5 porcento");
    }

    return 0;
    }
