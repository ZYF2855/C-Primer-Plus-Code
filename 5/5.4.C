#include <stdio.h>
int main(void)
{
    char a,b,c,d;
    printf("Enter center letter:");
    scanf("%c",&a);
    for( b = 'A';b<=a;b++)
    {
        for(int i = (int)(a-b);i>0;i--)
        {
            printf(" ");
        }
        for(c = 'A';c<=b;c++)
        {
            printf("%c",c);
        }
        for(d = b-1;d>='A';d--)
        {
            printf("%c",d);
        }
        printf("\n");
    }
    return 0;
}