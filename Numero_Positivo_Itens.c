#include <stdio.h>
#include <math.h>

/*Receba um n�mero positivo, calcule e mostre:
- o n�mero digitado ao quadrado
- o n�mero digitado ao cubo
- a ra�z quadrada do n�mero digitado*/

/*Receive a positive number, calculate and show:
- the number entered squared
- the number entered cubed
- the square root of the number entered*/

int main ()
{
    int num, quad, cubo, raiz;
    printf("Digite um numero\n");
     scanf("%d",&num);

    quad = num * num;
    cubo = num * num * num;
    raiz = sqrt(num);

     printf("O quadrado de %d e: %d \n\nO cubo e: %d \n\nE sua raiz quadrada e: %d",num,quad,cubo,raiz);
}
