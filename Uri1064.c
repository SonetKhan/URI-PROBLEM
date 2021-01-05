#include <stdio.h>

int main()
{

   double n,sum=0.0;

   int i,count=0;

   double avg;

   for(i = 0; i < 6; i ++)
   {
       scanf("%lf",&n);


               if( n > 0 )
               {
                   sum = sum + n;

                   count = count + 1;

               }



    }
    avg = (sum/count);



        printf("%d valores positivos\n",count);

       printf("%.1lf\n",avg);

       return 0;
}
