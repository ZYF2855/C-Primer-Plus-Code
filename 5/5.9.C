#include <stdio.h>
double func(double a ,double b);
int main(void)
{
    double a,b;
    printf("Enter two double num:");
    scanf("%lf,%lf",&a,&b);
    printf("%lf",func(a,b));
    return 0;
}

double func(double a,double b)
{
    double diff = a-b;
    double multi = a*b;
    return diff/multi;
}  