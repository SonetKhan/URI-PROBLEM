#include<stdio.h>
int main()
{
    int N,i,x;

    int notes[] = {100, 50, 20, 10, 5, 2, 1};

    scanf("%d",&N);
    if(0 < N < 1000000)
    {

    for(i = 0; i <= 6; i++)
    {
       x = N / notes[i];

       printf("%d nota(s) de R$ %d\n",x,notes[i]);

       N = N % notes[i];
    }

    }

return 0;
}
