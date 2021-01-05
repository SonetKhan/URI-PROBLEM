#include<stdio.h>
int main()
{
    double a,b,c,pie=3.14159,half=.5,m,n,o,p,q;

    while(scanf("%lf %lf %lf",&a,&b,&c)==3)
    {
          m=half*(a*c);
          n=pie*(c*c);
          o=half*(a+b)*c;
          p=b*b;
          q=a*b;
                printf("TRIANGULO: %.3lf\n",m);
                printf("CIRCULO: %.3lf\n",n);
                printf("TRAPEZIO: %.3lf\n",o);
                printf("QUADRADO: %.3lf\n",p);
                printf("RETANGULO: %.3lf\n",q);

    }
    return 0;
}
