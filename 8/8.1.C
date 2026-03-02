#include <stdio.h>
double min(double x,double y);
int main(void)
{
    printf("%lf",min(3.1415,1.697578));
    return 0;
}
double min(double x,double y)
{
    double a;
    a = (x>y) ? y : x;
    return a;
}