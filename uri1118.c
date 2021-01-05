#include <stdio.h>

int main() {
 int x=0,b = 0;
 double a,z;

 while(1)
 {
 scanf("%lf",&a);

 if(a >= 0 && a <= 10)
 {
     b = b + a;

     x ++;
 }
 else
 {
     printf("nota invalida");
 }
 if(x == 2)
 {

     z = b / 2.00;

     printf("media = %.lf",z);

     x = 0;
 }
 }

    return 0;
}
