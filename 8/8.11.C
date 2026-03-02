#include <stdio.h>
int Fibonacci_recursion(int n);
int Fibonacci_circle(int n);
int main(void)
{
    for(int i = 100;i>0;i--)
    {
        printf("%d\t",Fibonacci_circle(i));
    }
    return 0;
}

int Fibonacci_recursion(int n)
{
    if(n>2)
        return Fibonacci_recursion(n-1)+Fibonacci_recursion(n-2);
    else
        return 1;
}

int Fibonacci_circle(int n)
{
    int f1 = 1;
    int f2 = 1;
    int r;
    int r_1 = f2;
    int r_2 = f1;
    if(n == 1 || n == 2) return 1;
    else
    {
        for(int j = 0;j<n-2;j++)
        {
            r = r_1+r_2;
            r_2 = r_1;
            r_1 = r;
        }
    }
    return r;
}