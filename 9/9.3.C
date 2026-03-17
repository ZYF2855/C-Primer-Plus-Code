#include <stdio.h>
int find_max(int num[],int size);
int main(void)
{
    int a[10] = {1,2,3,4};
    printf("%d",find_max(a,sizeof a /sizeof a[0]));
    return 0;
}
/*int find_max(int num[])
{
    int max=num[0];
    for(int i =0;i<(int)(sizeof num /sizeof num[0]);i++) //传递参数时会退化成指针，然后这里sizeof的是指针的存储大小
    {
        max = num[i]>max ? num[i] : max;
    }
    return max;
}*/

int find_max(int num[],int size)
{
    int max=num[0];
    for(int i =0;i<size;i++) 
    {
        max = num[i]>max ? num[i] : max;
    }
    return max;
}