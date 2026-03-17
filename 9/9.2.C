#include <stdio.h>
void copy_arr(double target[],double source[],int num);
void copy_ptr(double * target,double * source,int num);
void copy_ptrs(double * target,double * source,double * end);
int main(void)
{
    double source[5] = {1.1,2.2,3.3,4.4,5.5};
    double target1[5];
    double target2[5];
    double target3[5];
    copy_arr(target1,source,5);
    copy_ptr(target2,source,5);
    copy_ptrs(target3,source,source+5);
    return 0;
}
void copy_arr(double target[],double source[],int num)
{
    for(int i = 0;i<num;i++)
    {
        target[i] = source[i];
    }
}
void copy_ptr(double * target,double * source,int num)
{
    for(int i = 0;i<num;i++)
    {
        *target = *source;
        target++;
        source++;
    }
}
void copy_ptrs(double * target,double * source,double * end)
{
    while(source < end)
    {
        *target = *source;
        target++;
        source++;
    }
}