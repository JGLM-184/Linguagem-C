 /* ELABORE UMA SUB-ROTINA QUE LEIA UM N�MERO N�O DETERMINADO DE VALORES POSITIVOS
    E RETORNE A M�DIA ARITM�TICA DESSES VALORES. TERMINAR A ENTRADA DE DADOS COM O
    VALOR ZERO  */

#include <stdio.h>
#include <locale.h>

int media(int x, int y)
{
    int resul;
    resul = x / y;
    return resul;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n, soma=0, i=-1, total;

    printf("Entre com valores positivos para obter sua m�dia aritm�tica:\n");
    printf("DIGITE O N�MERO 0 (ZERO) PARA ENCERRAR\n");

    while (n>0)
    {
     scanf("%d",&n);
     soma = soma + n;
     i++;
    }

    total = media(soma,i);

    printf("\n\nA m�dia aritm�tica dos %d n�meros digitados �: %d",i,total);

}
