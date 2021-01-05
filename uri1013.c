#include<stdio.h>
int main()
{
    int a,b,c;
    int max,greatest;

    scanf("%d %d %d",&a,&b,&c);

    if(a>b)
    {
      max = a;
    }
    else
    {
        max = b;
    }
    if(max > c)
    {
        greatest = max;


    }
    else
    {
        greatest = c;
    }

    printf("%d eh o maior\n",greatest);



return 0;
}
