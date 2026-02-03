#include <stdio.h>
int main(void)
{
    while(1)
    {
        int n;
        double res1,res2;
        int signal;
        printf("Enter final term:");
        scanf("%d",&n);
        if(n<=0) break;
        for(int i = 1;i<=n;i++)
        {
            res1+=1.0/(float)i;
        }
        for(int i = 1;i<=n;i++)
        {
            if(i%2==0) signal = -1;
            else signal = 1;
            res2+=signal*1.0/(float)i;
        }
        printf("%lf,%lf",res1,res2);
        res1 = res2 = 0;
    }
    return 0;
}