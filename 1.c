#include <stdio.h>
#define kof 1000
int main(void)
{
    /*При целочисленном дробь отбрасывается, т.к int округляет в меньшую*/
    int one;
    while (scanf("%d",&one) == 1){
    if (one <= 0){
        break;
    }
    printf("ДЛИНА KM: %d M: %d\n",one/kof,one%kof);
    }
    return 0;
}