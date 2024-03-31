#include <stdio.h>
const int k=9;
int main()
{
    int num[k], i;
    printf("Digite 10 numeros:\n");

    for (i=0;i<=k;i++)
    {
      scanf("%d",&num[i]);
    }

    printf("\nOs 10 numeros sao:\n\n");

    for (i=0;i<=k;i++)
    {
      printf("%d\n",num[i]);
    }
}
