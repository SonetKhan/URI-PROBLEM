#include<stdio.h>
int main(){
    int number,i=0,a=1,b=2,c=3;

    scanf("%d",&number);

    while(i<number){

    printf("%d %d %d PUM\n",a,b,c);

    a += 4;

    b += 4;

    c += 4;

    i++;

    }

return 0;
}
