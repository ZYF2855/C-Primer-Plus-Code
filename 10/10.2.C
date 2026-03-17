#include <stdio.h>
void get_next_n(char * res,int n);
int main(void)
{
    char res[20];
    get_next_n(res,10);
    puts(res);
    return 0;
}

void get_next_n(char * res,int n)
{
    char ch2;
    for(int i = 0;i<n;i++)
    {
        *res = getchar();
        if(*res == '\0' || *res == '\t' || *res == '\n') break;
        res++;
    }
    while((ch2 = getchar()) != '\n') continue;
}