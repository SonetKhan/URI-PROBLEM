#include <stdio.h>

int main() {

  int n,x,i=1;
  scanf("%d",&n);
  if(n > 5 && n < 2000 )
  {
      while(n !=0)
      {

          if(i % 2 == 0)
          {
              x = i * i;

              printf("%d^2 = %d\n",i,x);

          }

          i = i + 1;

          n = n -1;
      }

  }

    return 0;
}
