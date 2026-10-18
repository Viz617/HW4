#include <stdio.h>

int main(void)
{
    /* += для накопления т.к S = S + (k*k), a *= для произведения т.к S = S * (k*k)*/
    int N,S = 0,k = 0;
    scanf("%d",&N);
    while (k <= N){
        S += k * k;
        ++k;
    }
    printf("%d\n",S);
    return 0;
}