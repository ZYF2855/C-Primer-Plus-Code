#include <stdio.h>
void to_binary(unsigned long n);
void to_base_n(int a,int n);
int main(void)
{
    to_base_n(129,8);
    return 0;
}
void to_binary(unsigned long n)
{
    int r;
    r = n%2;
    if(n>=2)
        to_binary(n/2);
    putchar(r == 0 ? '0' :'1');
    return;
}

void to_base_n(int a,int n)
{
    if(n<2 || n>10) 
    {
        printf("n is illegal\n");
        return;
    }
    int r;
    r = a%n;
    if(a>=n)
        to_base_n(a/n,n);
    putchar(r+'4'-4);
    return;
}