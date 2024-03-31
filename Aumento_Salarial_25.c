#include <stdio.h>
#include <math.h>

//Dado um valor de salário, calcule e apresente um aumento de 25 % do mesmo
//Given a salary value, calculate and present a 25% increase in salary

int main ()
{
    int salario, aumento, novosal;
    printf("Digite o valor de seu salario\n");
     scanf("%d",&salario);

    aumento = salario * 0.25;
    novosal = salario + aumento;

    printf("\nO novo valor de seu salario e: R$%d\n",novosal);
}
