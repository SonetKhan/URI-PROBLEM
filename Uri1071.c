#include<stdio.h>
int main()
{
    int x,y;

    int sum = 0;

    scanf("%d %d",&y,&x);

        x = x + 1;

    while(x < y)
    {
        if( x % 2 != 0)
        {
            sum = sum + x;
        }

        x = x + 1;

    }
    printf("%d\n",sum);

    return 0;
}
