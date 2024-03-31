#include <stdio.h>

main ()
{
   int impar, par, num, i;

   par = 0;
   impar = 0;

   printf("Digite 10 numeros:\n\n");

   for(i=1;i<=10;i++)
   {
    scanf("%d",&num);

    if (num%2==0)
    {
     par = par + num;
    }

    else
    {
     impar = impar + num;
    }

    num = 0;
   }

   printf("\nA soma dos numeros pares e: %d\nA soma dos numeros impares e: %d",par, impar);
}
