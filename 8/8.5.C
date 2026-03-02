#include <stdio.h>
void larger_of(double *x,double *y);
int main(void)
{
    double a = 3.1415;
    double b = 5.789;
    larger_of(&a,&b);
    printf("%lf,%lf",a,b);
    return 0;
}
void larger_of(double *x,double *y)
{
    double larger = (*x>*y) ? *x : *y;
    *x = larger;
    *y = larger;
}