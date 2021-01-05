#include<stdio.h>
int main()
{
    int N,y,m,d;

    scanf("%d",&N);

    y = N / 365;

    printf("%d ano(s)\n",y);

    N = N % 365;

        m = N / 30;

        printf("%d mes(es)\n",m);

        N = N % 30;



             printf("%d dia(s)\n",N);








return 0;
}
