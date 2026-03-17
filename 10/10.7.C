#include <stdio.h>
#include <string.h>
void mystrncpy(char * a,char * b,int size);
int main(void)
{
    char a[10];
    char b[10] = "abcde";
    mystrncpy(a,b,2);
    puts(a);
    return 0;
}

void mystrncpy(char * a,char * b,int size)
{
    if((int)strlen(b)>size)
    {
        for(int i =0;i<size;i++)
        {
            *a = *b;
            a++;
            b++;
        }
        *a='\0';
    }
    else
    {
        while(*b != '\0')
        {
            *a = *b;
            a++;
            b++;
        }
        *a = '\0';
    }
}