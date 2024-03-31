#include <stdio.h>

int main()
{
//DECLARAÇÃO DE VARIÁVEIS

  int aux, aux2, i, j, mat[4][5], vet[5];


//ENTRADA DE DADOS NA MATRIZ
    for (i=0;i<4;i++)
     {
       for (j=0;j<5;j++)
        {
         printf("Entre com valores da posicao %d, %d: ",i,j);
         scanf("%d",&mat[i][j]);
        }
     }


//CÁLCULO DA SOMA DE CADA ELEMENTO DE CADA COLUNA DA MATRIZ E ALOCANDO EM CADA ELEMENTO
//DO VETOR
     aux=0;
     aux2=0;

     for (i=0;i<5;i++)
     {
        for (j=0;j<4;j++)
          {
           aux2 = aux2 + mat[j][aux];
          }
        vet[i] = aux2;
        aux = aux + 1;
        aux2 = 0;
     }


//EXIBIÇÃO DOS VALORES DE CADA ELEMENTO DO VETOR
     for (i=0;i<5;i++)
     printf("\n\nvetor: %d",vet[i]);

return 0;
}
