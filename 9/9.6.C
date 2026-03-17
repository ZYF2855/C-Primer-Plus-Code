#include <stdio.h>
void sort_arr(double data[],int size);
int main(void)
{
    double a[5] = {3.14,4.13,5.16,9.18,10.29};
    int size = sizeof a / sizeof a[0];
    sort_arr(a,size);
    for(int i =0;i<size;i++)
    {
        printf("%f\n",a[i]);
    }
    return 0;
}
void sort_arr(double data[],int size)
{
    /*备用数组法
    double data2[size];
    for(int i = 0;i<size;i++)
    {
        data2[i] = data[size - i - 1];
    }
    for(int i = 0;i<size;i++)
    {
        data[i] = data2[i];
    }
    */

    //指针法
    double * start = &data[0];
    double * end = &data[size - 1];
    double temp = 0;
    while(start != end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }

}