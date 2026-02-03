#include <stdio.h>
#include <math.h>
int main(void)
{
    int a[8];
    int j =0;
    for(int i = 0;i<8;i++)
    {
        a[i]= pow(2,i);
    }
    do
    {  
        printf("%d\t",a[j]);
        j++;
    }while(j<8);
    return 0;
}