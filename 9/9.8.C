#include <stdio.h>
void copy_ptr(double * target,double * source,int num);
int main(void)
{
    double source[7] ={1.1,2.2,3.3,4.4,5.5,6.6,7.7};
    double target[3];
    double * ptr1; 
    ptr1 = source + 2;
    copy_ptr(target,ptr1,3);
    for(int i = 0;i<3;i++)
    {
        printf("%f\t",target[i]);
    }
    return 0;
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