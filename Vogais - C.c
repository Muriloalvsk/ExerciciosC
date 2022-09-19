
    #include <locale.h>
    #include <stdio.h>
    #include <string.h>

    int main(){

    char texto[100];

    int tam=0,i = 0,vogais = 0, consoantes =0, a = 0 , e = 0, ii =0, o =0, u =0;

    printf("Digite um texto: ");
    gets(texto);

    while(texto[i]!= '\0'){
        i++;
        tam ++;
    }
    printf("\nQuantidade de caracteres: %d", tam);


    printf("\nQuatro primeiros caracteres: ");
    for(i = 0; i <= 3; i++){
        printf("\n%c", texto [i]);
    }


    for (i = 0; texto[i] != '\0'; i++) {

    if (texto [i] == 'a' || texto [i] == 'e'|| texto [i]== 'i' || texto [i] == 'o'|| texto [i] == 'u'
        || texto [i] == 'A'|| texto [i] == 'E' || texto [i] == 'I'|| texto [i] == 'O' || texto [i] == 'U'){
        vogais++;
    }
    else if(texto == ' '){
        continue;
    }
    else{
        consoantes++;
    }
    }

    printf("\nQuantidade de vogais: %d", vogais);
    printf("\nQuantidade de consoantes: %d", consoantes);


    for (i = 0; texto[i] != '\0'; i++) {

        if (texto [i] == 'a' || texto [i] == 'A'){
        a++;
    }
        if (texto [i] == 'e' || texto [i] == 'E'){
        e++;
    }
        if (texto [i] == 'i' || texto [i] == 'I'){
        ii++;
    }
        if (texto [i] == 'o' || texto [i] == 'O'){
        o++;
    }
        if (texto [i] == 'u' || texto [i] == 'U'){
        u++;
    }
    }

    printf("\nVogais 'A' no texto: %d", a);
    printf("\nVogais 'E' no texto: %d", e);
    printf("\nVogais 'I' no texto: %d", ii);
    printf("\nVogais 'O' no texto: %d", o);
    printf("\nVogais 'U' no texto: %d", u);

    return 0;

    }
