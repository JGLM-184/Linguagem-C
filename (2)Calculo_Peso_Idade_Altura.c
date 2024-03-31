#include <stdio.h>

main()
{
   float peso, media_altura, medfinal;
   int idade, altura, qntd_m50, qntd_p40, qntdmed, i, i2;

   qntd_m50 = 0;
   qntd_p40 = 0;
   qntdmed = 0;
   i2 = 0;

   printf("Digite, RESPECTIVAMENTE, a idade, altura (em cm) e o peso de 5 pessoas\n\n");

   for (i=1;i<=5;i++)
   {
    i2 = i2 + 1;
    printf("\nDigite os dados da pessoa %d\n",i2);
     scanf("%d",&idade);
     scanf("%d",&altura);
     scanf("%f",&peso);

    if (idade > 50)
     qntd_m50 =  qntd_m50 + 1;

    if (idade >=10 && idade <= 20)
    {
     qntdmed = qntdmed + 1;
     media_altura = media_altura + altura;
    }

    if (peso < 40)
     qntd_p40 = qntd_p40 + 20;
    idade = 0;
    altura = 0;
    peso = 0;
   }

   medfinal = media_altura / qntdmed;

  printf("\nA quantidade de pessoas com mais de 50 anos e:%d\n\nA media da altura (em cm) das pessoas entre 10 e 20 ano e: %.2f\n\nA porcentagem de pessoas com menos de 40kg e: %d%%\n",qntd_m50, medfinal, qntd_p40);
  }
