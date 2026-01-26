#include <stdio.h>
#include <string.h>
int main(void)
{
    char name1[50],name2[50];
    printf("Enter your name:");
    scanf("%s %s",name1,name2);
    int len1 = strlen(name1);
    int len2 = strlen(name2);
    printf("%s %s\n",name1,name2);
    printf("%*d %*d\n",len1,len1,len2,len2);
    printf("%s %s\n",name1,name2);
    printf("%-*d %-*d\n",len1,len1,len2,len2);
    return 0;
}