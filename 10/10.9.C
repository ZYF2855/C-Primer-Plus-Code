#include <stdio.h>
#include <string.h>
void reverse_str(char str[]);

int main(void)
{
    char a[10] = "abcdefg";
    puts(a);
    reverse_str(a);
    puts(a);
    return 0;
}

void reverse_str(char str[])
{
    char * ptr1 = str;
    char * ptr2 = &str[strlen(str)-1];
    char ptr_temp;
    while(ptr1 != ptr2)
    {
        ptr_temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = ptr_temp;
        ptr1++;
        ptr2--;
    }
}