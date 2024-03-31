#include <stdio.h>
#include <math.h>

//Dado 3 notas de um aluno, calcule a média aritmética
//Given 3 grades from a student, calculate the arithmetic mean

double main ()
{
    double nota1, nota2, nota3, media;

    printf("Escreva a nota 1:\n");
     scanf("%lf",&nota1);

    printf("Escreva a nota 2:\n");
     scanf("%lf",&nota2);

    printf("Escreva a nota 3:\n");
     scanf("%lf",&nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("A media e: %.1lf",media); //.1 pra reduzir casas decimais

}
