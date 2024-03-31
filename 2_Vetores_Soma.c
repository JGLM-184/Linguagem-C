#include <stdio.h>
const int k=5;
int main()
{
    int num1[k], num2[k], soma[k], i;

     for (i=0;i<=k;i++)
     {
         num1[i] = 0;
         num2[i] = 0;
         soma[i] = 0;
     }

    printf("Digite 5 numeros para o primeiro vetor:\n");

    for (i=0;i<k;i++)
     scanf("%d",&num1[i]);

    printf("Digite 5 numeros para o segundo vetor:\n");

    for (i=0;i<k;i++)
     scanf("%d",&num2[i]);

    printf("\nA soma dos pares de vetores e:\n");

    soma[0] = 0 ;

    for (i=0;i<k;i++)
    {
     soma[i] = num1[i] + num2[i];
     printf("%d\n",soma[i]);
    }
}
