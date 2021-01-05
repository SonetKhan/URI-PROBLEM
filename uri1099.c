#include <stdio.h>

int main() {

    int n;

    int i,j,a,b,sub;

    scanf("%d",&n);

    for(i = 1; i <= n; i = i + 1)
    {
        scanf("%d %d",&b,&j);

        sub = b - j;
        if(sub <= 1)
        {
            sub = 0;
            printf("%d\n",sub);
        }
        else
        {



        for(a = b-1; a > j; a = a - 1)
        {
            if(a % 2 != 0)
            {
                printf("%d\n",a);

            }
        }

        }
    }

    return 0;
}
