#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Entre com um valor\n");
     scanf("%d",&num1);

    printf("Entre com um segundo valor\n");
     scanf("%d",&num2);

     if (num1 > num2)
      printf("\nO primeiro numero (%d) e maior",num1);

     else
      printf("\nO segundo numero (%d) e maior\n",num2);
}
