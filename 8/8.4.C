#include <stdio.h>
double func(double a,double b);
int main(void)
{
    return 0;
}
double func(double a,double b)
{
    double a1 = 1.0/a;
    double b1 = 1.0/b;
    double c = (a1 + b1)/2;
    return 1.0/c;
}