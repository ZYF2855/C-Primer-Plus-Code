#include <stdio.h>
int main(void)
{
    char a[26],i;
    int j;
    for(i = 'a',j=0; i<='z' ;i++,j++)
    {
        a[j] = i;
        printf("%c\t",a[j]);
    } 
    return 0;
}