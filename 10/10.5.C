#include <stdio.h>
#include <string.h>
char * find_str(char * source,char aim_str);
int main(void)
{
    char a[10] = "abchdi";
    char * pos;
    char ch,ch2 ;

    printf("please enter a string:");
    fgets(a,10,stdin);
    while(ch2 != 'q')
    {
        printf("please enter your aim ch:");
        ch = getchar();
        while(getchar() != '\n') continue;//Çå¿Õ»º´æÇø
        pos = find_str(a,ch);
        printf("Find! The string start with the %c:\n"
            "%s\n", ch, pos);
        printf("quit or not:");
        ch2 = getchar();    
        while(getchar() != '\n') continue;
    }
    
   
    return 0;
}

char * find_str(char * source,char aim_str)
{
    char * aim_pos;
    while(*source != aim_str && *source != '\0')
    {
        source++;
    }
    if(*source == '\0') return NULL;
    else 
    {
        aim_pos = source;
    }
    return aim_pos;
}