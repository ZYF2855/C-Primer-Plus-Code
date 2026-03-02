#include <stdio.h>
void chline(char ch,int i,int j);
int main(void)
{
    chline('*',5,6);
    return 0;
}
void chline(char ch,int i,int j)
{
    for(int k = 0;k<j;k++)
    {
        printf("\n");
        for(int l = 0;l<i;l++)
        {
            printf("%c",ch);
        }
    }
}