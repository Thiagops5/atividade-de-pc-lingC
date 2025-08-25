#include<stdio.h>


    int main()
    {
    char nome[20];
    int repeticao;
    // ENTRADAS
    printf("\nQual no seu nome: ");
    scanf("%s", &nome);

    printf("\nQtd de repeticoes: ");
    scanf("%d", &repeticao);
    // SAIDA
    for(int i=0; i<repeticao; i++) {
     printf("\n%d - %s", (i+1), nome);}

    
return 0;

    }