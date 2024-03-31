#include <stdio.h>

int main()
{
    int i, par, impar,qntd, num[5];

    qntd = 0;

    printf("Digite 6 numeros:\n");

    for (i=0;i<=5;i++)
      scanf("%d",&num[i]);

    printf("\nOs numeros pares sao:\n");
     for (i=0;i<=5;i++)
     {
        if (num[i]%2==0)
         {
          printf("%d\n",num[i]);
          qntd = qntd + 1;
         }
      }
    printf("\nA quantidade de numeros pares e: %d\n\n",qntd);

    qntd = 0;

    printf("\nOs numeros impares sao:\n");
     for (i=0;i<=5;i++)
     {
        if (num[i]%2==1)
         {
          printf("%d\n",num[i]);
          qntd = qntd + 1;
         }
      }
    printf("\nA quantidade de numeros impares e: %d\n\n",qntd);
}
