// FAÇA UMA SUB-ROTINA QUE RECEBA UM VALOR INTEIRO E POSITIVO, CALCULE E MOSTRE SEU FATORIAL


#include <stdio.h>
#include <locale.h>

int fatorial(int n)
{
    int fat=1, i;
    for (i=1;i<n;i++)
     {
      fat = fat * (n - i) + fat;
     }
     return fat;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n, total;

    printf("Entre com um valor para saber seu fatorial: ");
     scanf("%d",&n);

     total = fatorial(n);

     printf("\nO fatorial de %d é: %d\n",n,total);
}
