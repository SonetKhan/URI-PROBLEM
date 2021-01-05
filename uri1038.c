#include <stdio.h>

int main() {

    int X,Y;

    double q;

    scanf("%d",&X);

    scanf("%d",&Y);

    if(X == 1)
    {
        q = (Y * 4.00);

        printf("Total: R$ %.2lf\n",q);


    }

    else if(X == 2)
    {
        q = (Y * 4.50);

        printf("Total: R$ %.2lf\n",q);


    }
     else if(X == 3)
    {
        q = (Y * 5.00);

        printf("Total: R$ %.2lf\n",q);


    }
     else if(X == 4)
    {
        q = (Y * 2.00);

        printf("Total: R$ %.2lf\n",q);


    }
     else
    {
        q = (Y * 1.50);

        printf("Total: R$ %.2lf\n",q);


    }



    return 0;
}
