#include <stdio.h>

int main()
{
    int tbd, lmt, i, resul;

    printf("De qual numero voce deseja saber a tabuada? ");
    scanf("%d",&tbd);

    printf("Ate qual numero? ");
    scanf("%d",&lmt);

    for (i=1;i<=lmt;i++)
    {
     resul=tbd*i;
     printf("\n%d x %d = %d",tbd,i,resul);
    }


    return 0;
}

