#include <stdio.h>
double power(double n,int p);
int main(void)
{
    printf("%lf",power(2.0,3));
    printf("%lf",power(0,0));
    printf("%lf",power(2.0,-2));
    return 0;
}
double power(double n,int p)
{
    double pow = 1;
    if(p>0)
    {
        for(int i = 1;i<=p;i++)
        {
            pow*=n;
        }
    }
    else if(p == 0)
    {
        if(n == 0) printf("0 power 0 is illegal\n");
        pow = 1;
    }
    else if(p<0)
    {
        for(int i = -1;i>=p;i--)
        {
            pow/=n;
        }
    }
    return pow;
}