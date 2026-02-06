#include <stdio.h>
int main(void)
{
    char c;
    int count = 0;
    while((c = getchar()) != '#')
    {
        printf("%c,%d,",c,c);
        count+=2;
        if(count == 8)
        {
            printf("\n");
            count = 0;
        }
    }
    return 0;
}