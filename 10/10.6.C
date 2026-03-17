#include <stdio.h>
#include <stdbool.h> //bool 类型头文件
bool is_within(char a,char * source);
int main(void)
{
    char a[10] = "abchdi";
    char ch,ch2 ;
    bool is_found;
    printf("please enter a string:");
    fgets(a,10,stdin);
    while(ch2 != 'q')
    {
        printf("please enter your aim ch:");
        ch = getchar();
        while(getchar() != '\n') continue;
        is_found = is_within(ch,a);
        if(is_found) printf("Find it\n");
        else printf("Can not find\nn");
        printf("quit or not:");
        ch2 = getchar();    
        while(getchar() != '\n') continue;
    }
    return 0;
}

bool is_within(char a,char * source)
{
    while(*source != a && *source != '\0')
    {
        source++;
    }
    if(*source == '\0') return false;
    else return true;
}   