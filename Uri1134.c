#include<stdio.h>
int main(){
    int number,alcool=0,gasolina=0,diesel=0;
    printf("MUITO OBRIGADO\n");
    while(1){
            scanf("%d",&number);

        if(number>0 && number<4){

            if(number==1) alcool++;

            else if(number==2) gasolina++;

            else  diesel++;

        }
        else if (number == 4) break;
    }
    printf("Alcool: %d\n",alcool);

    printf("Gasolina: %d\n",gasolina);

    printf("Diesel: %d\n",diesel);

return 0;
}
