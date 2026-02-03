#include <stdio.h>
int main(void)
{
    int up_bound,down_bound;
    int sum = 0;
    while(1)
    {
        printf("Enter up and down bound:");
        scanf("%d %d",&up_bound,&down_bound);
        if(up_bound<=down_bound) break;
        for(int i = down_bound;i<=up_bound;i++)
        {
           sum+=i*i;
        }
        printf("The sum is %d\n",sum);
        sum = 0;
    }
    return 0;
}