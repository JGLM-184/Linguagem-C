#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");

    int salario, imposto, aumento;
    char opcao;
    printf("Digite a op��o que deseja\n\n1. Imposto\n2. Novo sal�rio\n3. Classifica��o\n\n");
     scanf("%c",&opcao);

    switch(opcao)
    {
     case'1':printf("Voc� selecionou a op��o 1 (Imposto) \nDigite o valor do seu sal�rio\n\n");
               scanf("%d",&salario);

            if (salario < 500) //1
              imposto = salario * 0.05;

            if (salario>=500 && salario<=850 ) // 2
              imposto = salario * 0.10;

             if (salario > 850 ) // 3
              imposto = salario * 0.15;

             printf("\nO valor do seu imposto ser� de: R$%d",imposto);
             break;

     case'2':printf("Voc� selecionou a op��o 2 (Novo sal�rio) \nDigite o valor do seu sal�rio\n\n");
              scanf("%d",&salario);

             if (salario > 1500) //1
              aumento = salario + 25;

             if (salario>=750 && salario<=1500) //2
              aumento = salario + 50;

             if (salario>=450 && salario<750) //3
              aumento = salario + 75;

             if (salario<450) //4
              aumento = salario + 100;

            printf("\nO valor do novo sal�rio ser� de: R$%d",aumento);
            break;

     case'3':printf("Voc� selecionou a op��o 3 (Classifica��o) \nDigite o valor do seu sal�rio\n\n");
              scanf("%d",&salario);

            if (salario <= 700)
               printf("\nClassifica��o: Mal remunerado");

            if (salario > 700)
               printf("\nClassifica��o: Bem remunerado");

    default: printf("Escolha n�o identificada");

    }
}
