#include<stdio.h>
int main()
{
    int i, j, X, Y, x = 0, c;
    for(i = 0;i < 100;i++){
        scanf("%d", &X);
        if(X == 2002)printf("Acesso Permitido\n");
        else printf("Senha Invalida\n");
        if(X == 2002)break;
    }
    return 0;
}
