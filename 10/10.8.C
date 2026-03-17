#include <stdio.h>
char * string_in(char * source,char *aim);
int main(void)
{
    char source[10] = "hats";
    char aim[10] = "at";
    char * pos;
    pos = string_in(source,aim);
    printf("%p\n %p",pos,&source); //printf("%p\n %p",&pos,&source); 两者有区别
    return 0;
}
char * string_in(char * source,char *aim)
{
    char * pos;
    while(*source != *aim && *source != '\0') 
    {
        source++;
    }
    pos = source;
    if(*source == '\0') return NULL;
    else
    {
        while(*aim != '\0')
        {
            if(*source == *aim)
            {
                source++;
                aim++;
                continue;
            } 
            else return NULL;
        }
    }
    return pos;
}