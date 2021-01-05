#include<stdio.h>
int main()
{
    int A,B,ft;

    scanf("%d %d",&A,&B);

    ft = B - A;



    if (ft < 0)
    {
        ft = 24 + (B - A);

    printf("O JOGO DUROU %d HORA(S)\n",ft);

    }
    else if (ft == 0)
    {
       printf("O JOGO DUROU 24 HORA(S)\n");
    }
   else if (ft > 0)
    {

        printf("O JOGO DUROU %d HORA(S)\n",ft);

    }


return 0;
}
