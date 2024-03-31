#include <stdio.h>

char main()

{
    char estado;

    printf("Digite o estado civil. Utilize c, d, s ou v: \n\n");
     scanf("%c",&estado);

    switch (estado)
    {
     case 'c':printf("\nCasado(a)");
      break;
     case 'd':printf("\nDivorciado(a)");
      break;
     case 's':printf("\nSolteiro(a)");
      break;
     case 'v':printf("\nViuvo(a)");
      break;

     default: printf("Estado civil nao identificado");
    }
}
