#include <stdio.h>
int main(void)
{
    char a = 'F';
    for(;a>='A';a--)
    {
        for(char b = 'F';b>=a;b--)
        {
            printf("%c",b);
        }
        printf("\n");
    }
    return 0;
}