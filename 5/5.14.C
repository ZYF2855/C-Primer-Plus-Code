#include <stdio.h>
int main(void)
{
    double a[8],b[8];
    for(int i=0;i<8;i++)
    {
        printf("Enter number %d of a[]",i);
        scanf("%lf",&a[i]);
    }
    b[0] = a[0];
    for(int j = 1;j<8;j++)
    {
        b[j]+=b[j-1]+a[j];///ตÝน้
    } 
    for(int m =0;m<8;m++)
    {
        printf("%.2lf\t",a[m]);
    }
    printf("\n");
    for(int m =0;m<8;m++)
    {
        printf("%.2lf\t",b[m]);
    }
    return 0;
}