#include<stdio.h>

int main(){

    int i,number,a,b,c;

    scanf("%d",&number);

    for(i = 1; i <= number; i++){

            a = i;
            b = i * i;
            c = i * i * i;

    printf("%d %d %d\n",a,b,c);

    printf("%d %d %d\n",a,b+1,c+1);

    }

return 0;
}
