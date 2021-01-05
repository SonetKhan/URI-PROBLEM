#include<stdio.h>
int main()
{
    int pr1,unit1;

    int pr2,unit2;

    double price1,price2;

    double paid1,paid2,totalpaid;

    scanf("%d %d %lf",&pr1,&unit1,&price1);

    scanf("%d %d %lf",&pr2,&unit2,&price2);

    paid1 = unit1 * price1;

    paid2 = unit2 * price2;

    totalpaid =  paid1 + paid2;

    printf("VALOR A PAGAR: R$ %.2lf\n",totalpaid);



return 0;

}
