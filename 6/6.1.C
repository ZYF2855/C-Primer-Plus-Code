#include <stdio.h>
#include <ctype.h>
int main(void)
{
    int Blank_count = 0;
    int newline_count = 0;
    int else_count = 0;
    char c;
    while((c = getchar()) != '#')
    {
        if(isblank(c)) Blank_count++;
        else if(c == '\n') newline_count++;
        else else_count++;
    }
    printf("%d,%d,%d",Blank_count,newline_count,else_count);
    return 0;
}