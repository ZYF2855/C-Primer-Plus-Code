#include <stdio.h>
void func(double x);
int main(void)
{
    double a;
    printf("Enter a double value:");
    scanf("%lf",&a);
    func(a);
    return 0;
}

void func(double x)
{
    double y = x * x * x;
    printf("%.2f 's cube is %.4f",x,y);
}