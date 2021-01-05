#include<stdio.h>
int main()
{
    int n,i,j;

    scanf("%d",&n);

    for(i =1; i <= n; i++)
    {
        scanf("%d",&j);

        if(j == 0 )
        {
            printf("NULL\n");

        }
        if(j < 0 && j % 2 != 0)
        {
            printf("ODD NEGATIVE\n");

        }
         if(j > 0 && j % 2 != 0)
        {
            printf("ODD POSITIVE\n");

        }
         if(j < 0 && j % 2 == 0)
        {
            printf("EVEN NEGATIVE\n");

        }

         if(j > 0 && j % 2 == 0)
        {
            printf("EVEN POSITIVE\n");

        }



    }



return 0;
}










