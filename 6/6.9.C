#include <stdio.h>
#include <stdbool.h>
int main(void)
{
    int a;
    bool noformal = false;
    scanf("%d",&a);
    for(int i = 1;i<=a;i++)
    {
        if(i == 1) printf("%d\t",i);
        else
        {
            for(int j = 2;j*j<=i;j++)
            {
                if(i%j==0) 
                {
                    noformal = true;
                    break;
                }
            }
           if(!noformal) printf("%d\t",i);
           noformal = false;
        }
    }
    return 0;
}