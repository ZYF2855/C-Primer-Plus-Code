#include <stdio.h>
#define Dunbar_number 150
int main(void)
{
    int n = 5;
    int i = 0;
    while(1)
    {
        if(n>Dunbar_number) break;
        printf("%d\t",n);
        i++;
        n-=i;
        n*=2;
    }
    return 0;
}