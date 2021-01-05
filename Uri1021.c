#include<stdio.h>
#include<math.h>

int main()
{
    double N;

    int i,taka,j,poisha;

    scanf("%lf",&N);

    double notes[] = {100, 50, 20, 10, 5, 2};

    double coins [] = {1, 0.50, 0.25, 0.10, 0.05, 0.01};

    int len = sizeof(notes) / sizeof(notes[0]);

     int length = sizeof(coins) / sizeof(coins[0]);




    if (0< N < 1000000.00)
    {


    printf("NOTAS:\n");
    for(i = 0; i < len; i ++)
    {
        taka = N / notes[i];

        printf("%d nota(s) de R$ %.2lf\n",taka,notes[i]);

        N = fmod(N,notes[i]);//% does not work in double value


}
//....now for floating value.....
        printf("MOEDAS:\n");

        for(j = 0; j < length; j ++)
        {
            poisha = N / coins [j];

            printf("%d moeda(s) de R$ %.2lf\n",poisha,coins [j]);

            N = fmod(N,coins[j]);


        }

    }

return 0;
}
