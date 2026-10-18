#include <stdio.h>
#include <stdint.h>
/*Приводим к double, т.к может случиться потеря точности.*/
int main(void)
{
    uint8_t r,g,b;
    scanf("%hhu %hhu %hhu",&r,&g,&b);

    printf("%3.f\n%llu\n%llu\n",0.299*(double)r + 0.587*(double)g + 0.114*(double)b,
    (unsigned long long)sizeof(uint8_t),(unsigned long long)sizeof(double));
    return 0;

}