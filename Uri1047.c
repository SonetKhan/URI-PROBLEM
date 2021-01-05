#include<stdio.h>
int main()
{
    int a,b,c,d;

     int h,m;

    scanf("%d %d %d %d",&a,&b,&c,&d);

    if( a > c && b > d)
    {
        h = (c + 23) - a;

        m = ( d + 60 ) - b;

        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    }
    else if (a == c && b > d)
    {
        h = (a + 23) - c ;

        m = (d + 60) - b;

        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);

    }
    else if (a == c && b < d)
    {
        h = a - c;

         m = d -b;

         printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    }
    else if(b == d && a > c)
    {
        h = ( 24 + c ) - a;

        m = b -d ;

         printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);


    }
     else if(b == d && c > a)
    {
        h =  c  - a;

        m = b -d ;

         printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);


    }
    else if( a >c && d > b)
    {

        h = (24 + c) - a;

        m  = d - a;

        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);

    }
    else if ( c > a && b > d)
    {
        h = (c - a) - 1;

        m = (d + 60) - b;


        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    }

    else if( c > a && b < d)
    {
         h = c - a;

         m  = d - a;

          printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);

    }
    else
    {
        h = (c - a) + 24;

        m = d - b;

         printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    }
return 0;
}
