#include<stdio.h>

int main(){

    int number1, number2, i;

    scanf("%d %d",&number1,&number2);

    for(i=1; i<=number2; i++){

    printf("%d ",i);

    if(i % number1 == 0){

    printf("\n");
    }

    }

return 0;
}
