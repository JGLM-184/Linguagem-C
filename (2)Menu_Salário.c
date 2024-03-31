#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int salario, imposto, aumento;
    char opcao;
    printf("Digite a opção que deseja\n\n1. Imposto\n2. Novo salário\n3. Classificação\n\n");
     scanf("%c",&opcao);

    switch(opcao)
    {
     case'1':printf("Você selecionou a opção 1 (Imposto) \nDigite o valor do seu salário\n\n");
               scanf("%d",&salario);

            if (salario < 500) //1
              imposto = salario * 0.05;

            if (salario>=500 && salario<=850 ) // 2
              imposto = salario * 0.10;

             if (salario > 850 ) // 3
              imposto = salario * 0.15;

             printf("\nO valor do seu imposto será de: R$%d",imposto);
             break;

     case'2':printf("Você selecionou a opção 2 (Novo salário) \nDigite o valor do seu salário\n\n");
              scanf("%d",&salario);

             if (salario > 1500) //1
              aumento = salario + 25;

             if (salario>=750 && salario<=1500) //2
              aumento = salario + 50;

             if (salario>=450 && salario<750) //3
              aumento = salario + 75;

             if (salario<450) //4
              aumento = salario + 100;

            printf("\nO valor do novo salário será de: R$%d",aumento);
            break;

     case'3':printf("Você selecionou a opção 3 (Classificação) \nDigite o valor do seu salário\n\n");
              scanf("%d",&salario);

            if (salario <= 700)
               printf("\nClassificação: Mal remunerado");

            if (salario > 700)
               printf("\nClassificação: Bem remunerado");

    default: printf("Escolha não identificada");

    }
}
