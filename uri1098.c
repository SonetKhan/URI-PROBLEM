#include <stdio.h>

int main()
{

    float i,j,b;



    for (i=0.0; i<=2.1; i+=.2)
    {
        for(b=1.0; b<=3.0; b+=1.0)
        {
            j = b + i;

            printf("I=%.1lf j=%.1lf\n",i,j);

        }

    }

    return 0;
}
