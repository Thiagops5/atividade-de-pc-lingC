#include<stdio.h>

int main()
{
    char nome[20] = "Thiago";

    for (int i=0; i<=13; i++){
    //  for (int i=0; i<=13; i++)
        printf("\nMeu nome e %d: %s", i, nome);
        // printf("\nMeu nome %d: %s", (i+1), nome);
    }
    return 0;
}