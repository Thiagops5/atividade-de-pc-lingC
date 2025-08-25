#include<stdio.h>
int main()
{
    char nome[20];
    int inicio, fim;
    // ENTRADAS
    printf("\nQual o seu nome: ");
    scanf("%s", &nome);

    printf("\nValor inicial: ");
    scanf("%d", &inicio);
    
    printf("\nValor final: ");
    scanf("%d", &fim);
    
    // PROCESSAMENTO
    for(int i = inicio; i <= fim; i++){
        printf("\n%d - %s", i, nome);
    }
    
    return 0;
    }
    