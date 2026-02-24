#include <stdio.h>
char get_first(void);
int main(void)
{
    return 0;
}

char get_first(void)
{
    char ch;
    ch = getchar();
    while(getchar()!='\n') continue;
    return ch;
}