#include<stdio.h>
int main()
{
    int i=1,n;

    scanf("%d",&n);



    while(i <= 6)
    {


        if(n % 2 != 0)
        {
            printf("%d\n",n);

             i = i + 1;

        }

        n = n + 1;




    }

    return 0;
}
