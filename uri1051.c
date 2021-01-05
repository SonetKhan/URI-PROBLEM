#include <stdio.h>

int main()
{

  double x,t;

  scanf("%lf",&x);

  if( x >= 0 && x <= 2000.00)
  {
      printf("Isento\n");

  }
  else if( x >= 2000.01 && x <= 3000.00 )
  {
      x = x - 2000.00;

      t = x * 0.08;

      printf("R$ %.2lf\n",t);

  }
  else if( x >= 3000.01 && x <= 4500.00)
  {
      x = x - 2000;

       t = 1000 * 0.08;

       x = x - 1000;



       t = t + x * 0.18;


      printf("R$ %.2lf\n",t);

  }
  else if ( x >= 4500.00)
  {
      x = x - 2000;

       t = 1000 * 0.08;



       x = x - 1000;

       t = t + 1500 * 0.18;




       x = x - 1500;

       t = t + x * 0.28;

       printf("R$ %.2lf\n",t);

  }
    return 0;
}
