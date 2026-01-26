#include <stdio.h>
#include <string.h>
int main(void)
{
    char name1[50],name2[50];
    printf("Enter your name:");
    scanf("%s %s",name1,name2);
    printf("\"%s,%s\"\n",name2,name1);
    printf("\"%20s,%20s\"\n",name2,name1);
    printf("\"%-20s,%-20s\"\n",name2,name1);
    
    int len1 = strlen(name1);
    int len2 = strlen(name2);
    int len  = len1+len2+3;
    printf("\"%*s,%*s\"\n",len,name2,len,name1); //Ë³ÐòÒª¶ÔÓ¦
    return 0;
}