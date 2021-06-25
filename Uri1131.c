#include <stdio.h>

int main() {
    int a,b,c;

    int inter=0,gremio=0,draw=0,total=1;

   while(1){

       scanf("%d %d",&a,&b); // goal input for both team....

       if(a>b){

           inter++; // ....a represent inter

       }else if(a==b){

           draw++;

       }else{

           gremio++; //......b represent gremio....
       }

       printf("Novo grenal (1-sim 2-nao)\n");

       scanf("%d",&c); ///....... input for continuation..........

       if(c == 1){

           total++;

           continue;

       }
       else{

           break;

       }
   }
    printf("%d grenais\n",total);

    printf("Inter:%d\n",inter);

     printf("Gremio:%d\n",gremio);

     printf("Empates:%d\n",draw);

     printf("Inter venceu mais\n");


    return 0;
}
