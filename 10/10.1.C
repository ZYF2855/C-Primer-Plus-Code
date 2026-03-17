#include <stdio.h>
void get_next_n(char * res,int n);
int main(void)
{
    char res[11];//char res[10] 会出现问题，因为字符串结束标识符'\0'没地方存储
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
        res++;
    }
    while((ch2 = getchar()) != '\n') continue;
}
/*
char * s_gets(char * st,int n)
{
    char * ret_val;
    int i = 0;
    ret_val = fgets(st,n,stdin);
    if(ret_val)
    {
        while (st[i] != '\n' && st[i] != '\0')
        {
            i++;
        }
        if(st[i] == '\n') st[i] == '\0';
        else 
        {
            while(getchar() != '\n') continue;
        }
    }
    return ret_val;
}
*/