#include <stdio.h>
#define row 3
#define col 4
void copy_ptr(double * target,double * source,int num);
int main(void)
{
    double source[row][col] = 
    {
        {3.14,4.13,5.14,6.15},
        {12.19,10.98,23.14,78.19},
        {0.98,0.79,0.56,0.45},
    };
    double target[row][col];
    double (*pt1) [col];
    double (*pt2) [col];
    pt1 = source;
    pt2 = target;
    for(int i = 0 ;i<row;i++)
    {
        copy_ptr(pt2[i],pt1[i],col);
    }
    for(int i = 0;i<row;i++)
    {
        for(int j = 0;j<col;j++)
        {
            printf("%.2f\t",target[i][j]);
        }
        printf("\n");
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
