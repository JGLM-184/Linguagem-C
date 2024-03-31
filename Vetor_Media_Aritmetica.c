#include <stdio.h>
const int k=5;
int main()
{
    float valor_final;
    int i, media, valores[k];

    media = 0;

    printf("Digite 6 numeros para obter sua media aritmetica\n");

    for (i=0;i<=k;i++)
    {
     scanf("%d",&valores[i]);
     media = valores[i] + media;
    }

    valor_final = (media/6);

    printf("\nA media aritmetica e: %.1f",valor_final);
}
