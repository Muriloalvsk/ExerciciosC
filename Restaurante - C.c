    #include <stdio.h>


    int main(){

    int p1, p2 , p3;
    int r1, r2 , r3;
    int s1, s2 , s3;

    s1=0;
    s2=0;
    s3-0;

    printf("Quantas refeicoes do primeiro prato?\n");
    scanf("%d", &p1);

    printf("Quantas refeicoes solicitadas do primeiro prato?\n");
    scanf("%d", &r1);

        if(r1 > p1, s1 = r1 - p1);
        printf("Faltaram %d primeiros pratos\n",s1);
        printf("                                   \n\n");



    printf("Quantas refeicoes do segundo prato?\n");
    scanf("%d", &p2);

    printf("Quantas refeicoes solicitadas do segundo prato?\n");
    scanf("%d", &r2);

        if(r2 > p2, s2 = r2 - p2);
        printf("Faltaram %d primeiros pratos\n",s2);
        printf("                                   \n\n");


    printf("Quantas refeicoes do terceiro prato?\n");
        scanf("%d", &p3);

    printf("Quantas refeicoes solicitada do terceiro prato?\n");
        scanf("%d", &r3);
        if(r3 > p3, s3 = r3 - p3);
        printf("Faltaram %d primeiros pratos\n",s3);
        printf("                                   \n\n");


    printf("Faltaram %d pratos no final\n\n", s1 + s2 + s3);


    return 0;


    }
