 /* ELABORE UMA SUB-ROTINA QUE LEIA UM NÚMERO NÃO DETERMINADO DE VALORES POSITIVOS
    E RETORNE A MÉDIA ARITMÉTICA DESSES VALORES. TERMINAR A ENTRADA DE DADOS COM O
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

    printf("Entre com valores positivos para obter sua média aritmética:\n");
    printf("DIGITE O NÚMERO 0 (ZERO) PARA ENCERRAR\n");

    while (n>0)
    {
     scanf("%d",&n);
     soma = soma + n;
     i++;
    }

    total = media(soma,i);

    printf("\n\nA média aritmética dos %d números digitados é: %d",i,total);

}
