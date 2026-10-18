#include <stdio.h>

double ft_to_m(double ft)
{
    /*Т.к мы обозначили, что функция принимает только double, поэтому не float. Если ввод будет буквой, то
    scanf вернет 0 и условие будет ложным, цикл завершится*/
    double m = 0;
    const double KOF = 3.281;
    m = ft/KOF;
    return m;
}
int main(void)
{
    double ft;
    while (scanf("%lf",&ft) == 1){
        printf("%.2f\n", ft_to_m(ft));
    }
    return 0;
}
