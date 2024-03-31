#include <stdio.h>
const int k=8;

int main()
{
    int i, a, b, c, num[k];



    printf("Digite 7 numeros:\n");

    for (i=1;i<k;i++)
     scanf("%d",&num[i]);


    for (i=1;i<k;i++)
     {
      if (num[i]%2==0)
      {
       a = a + 1;
      }
     }

    if (a = 0)
     {
      printf("\nNao ha numeros multiplos de 2\n");
     }

     else
     {
      printf("\nOs numeros multiplos de 2 sao:\n");
      for (i=1;i<k;i++)
       {
        if (num[i]%2==0)
        {
        printf("%d\n",num[i]);
        }
       }
      }
//..............................................................

    for (i=1;i<k;i++)
     {
      if (num[i]%3==0)
      {
       b = b + 1;
      }
     }

    if (b = 0)
     {
      printf("\nNao ha numeros multiplos de 3\n");
     }

     else
     {
      printf("\nOs numeros multiplos de 3 sao:\n");
      for (i=1;i<k;i++)
       {
        if (num[i]%3==0)
        {
        printf("%d\n",num[i]);
        }
       }
      }

//................................................

    if (a > 0 && b > 0)
    {
     printf("\nOs numeros multiplos de 2 e 3 sao:");
     for (i=1;i<k;i++)
     {
      if (num[i]%2==0 && num[i]%3==0)
      {
       printf("\n%d",num[i]);
      }
     }
    }

    else
     printf("\nNao ha numeros multiplos de 2 e de 3");

}
