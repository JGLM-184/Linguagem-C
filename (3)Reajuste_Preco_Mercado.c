#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");

    float novopreco;
    int produto, venda, reajuste;
    printf("Digite o pre�o do produto para verificar seu reajuste: ");
     scanf("%d",&produto);

    printf("\nDigite o valor de venda m�dia mensal do produto: ");
     scanf("%d",&venda);

     if (produto<30 && venda<500)
     {
      reajuste = (produto*0.10);
      novopreco = (produto+reajuste);
     }

     if ((venda>=500 && venda<1200) && (produto>=30 && produto<80))
     {
      reajuste = (produto*0.15);
      novopreco = (produto+reajuste);
     }

     if (venda>=1200 && produto>=80)
     {
      reajuste = (produto*0.20);
      novopreco = (produto-reajuste);
     }

     printf("\nO novo valor do produto ser�: R$%lf",novopreco);
}
