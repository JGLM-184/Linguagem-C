#include <stdio.h>

int main()

{

//DECLARACAO DE MATRIZ -> XPTO[Linha][Coluna]
    int valor, aux, i, j, M[2][2], R[2][2];
    aux = -100000;

//ENTRADA DE DADOS
    for (i=0;i<2;i++)
    {
     for (j=0;j<2;j++)
     {
      printf("Entre com valores da posicao %d, %d: ",i,j);
       scanf("%d",&M[i][j]);
         if (M[i][j] > aux)
         {
          aux = M[i][j];
         }
     }
    }

 printf("\n\nO Maior numero e: %d\n\n",aux);
 printf("Calculando os valores para a matriz R, aguarde...\n\n");

//CALCULO PARA A MATRIZ R
    for (i=0;i<2;i++)
    {
     for (j=0;j<2;j++)
     {
      valor = (M[i][j]*aux);
      R[i][j] = valor;
      valor = 0;
     }
    }

    for (i=0;i<2;i++)
    {
     printf("\nElementos da linha %d: ",i);
      for (j=0;j<2;j++)
      {
       printf(" %d ",R[i][j]);
      }
    }


return 0;

}
