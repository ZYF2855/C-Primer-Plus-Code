#include <stdio.h>
void sum_arr_func(int *arr1,int *arr2,int * res_arr,int size);
int main(void)
{
    int arr1[4] = {2,4,5,8};
    int arr2[4] = {1,0,4,6};
    int res_arr[4];
    sum_arr_func(arr1,arr2,res_arr,4);
    for(int i = 0;i<4;i++) 
    {
        printf("%d\n",res_arr[i]);    
    }
    return 0;
}
void sum_arr_func(int *arr1,int *arr2,int * res_arr,int size)
{
    for(int i = 0;i<size;i++)
    {
        *res_arr = *arr1 + *arr2;
        res_arr++;
        arr1++;
        arr2++;
    }
}