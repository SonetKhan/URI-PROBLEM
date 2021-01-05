#include<stdio.h>
int main()
{
    int N[105],max = 0,i,j,pos,count=0;
    for(i = 0; i < 100; i++)
    {
    scanf("%d",&N[i]);
    }

    for(j = 0; j < 100; j++)
    {
        if(N[j] > max)
        {
         max = N[j];

         pos = j+1;

        }





    }

    printf("%d\n",max);

    printf("%d\n",pos);




return 0;
}
