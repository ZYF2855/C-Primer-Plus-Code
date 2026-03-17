#include <stdio.h>
#include <string.h>
#include <ctype.h>
char * delete_space(char * source);
int main(void)
{
    char a[100];
    printf("Enter a str:");
    fgets(a,10,stdin);
    fputs(delete_space(a),stdout);
    return 0;
}
char * delete_space(char * source)
{
    char * str = source;
    while(*source != '\0')
    {
        if(isspace(*source)) 
        {
            for(int i =0;source[i] != '\0';i++)
            {
                source[i] = source[i+1];
            }
        }
        source++;
    }
    return str;
}