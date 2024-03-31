#include <stdio.h>
#include <locale.h>

int main()

{
    setlocale(LC_ALL, "Portuguese");

    int tbd, lmt, i=0, resul;

    printf("De qual numero voce deseja saber a tabuada? ");
    scanf("%d",&tbd);

    printf("Ate qual numero? ");
    scanf("%d",&lmt);

    do
    {
    resul=tbd*i;
     printf("\n%d x %d = %d",tbd,i,resul);
     i++;

    }while(i<=lmt);

}
