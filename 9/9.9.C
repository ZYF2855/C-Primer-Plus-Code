#include <stdio.h>
#define row 3
#define col 5
void copy_arr(int r,int c,double source[r][c],double target[r][c]);
void show_arr(int r,int c,double aim[r][c]);
//代码语法：变长数组没问题，编译器版本不支持这样的写法
int main(void)
{
    double source[row][col] = 
    {
        {3.14,4.13,5.14,6.15,7.19},
        {12.19,10.98,23.14,78.19,99.9},
        {0.98,0.79,0.56,0.45,0.98},
    };
    double target[row][col];
    copy_arr(row,col,source,target);
    show_arr(row,col,target);
    return 0;
}
void copy_arr(int r,int c,double source[r][c],double target[r][c])
{
    for(int i =0;i<r;i++)
    {
        for(int j = 0;j<c;j++)
        {
            target[i][j] = source[i][j];
        }
    }
}
void show_arr(int r,int c,double aim[r][c])
{
    for(int i =0;i<r;i++)
    {
        for(int j = 0;j<c;j++)
        {
            printf("%f\t",aim[i][j]);
        }
        printf("\n");
    }
}