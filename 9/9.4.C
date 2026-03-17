#include <stdio.h>
int find_max_index(int num[],int size);
int main(void)
{
    int a[10] = {1,2,3,4};
    printf("%d",find_max_index(a,sizeof a /sizeof a[0]));
    return 0;
}

int find_max_index(int num[],int size)
{
    int max=num[0];
    int max_index = 0;
    for(int i =0;i<size;i++) 
    {
        if(num[i]>max)
        {
            max = num[i];
            max_index = i;
        }
    }
    return max_index;
}