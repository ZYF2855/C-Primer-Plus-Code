#include <stdio.h>
int main(void)
{
    FILE * fp;
    char file1_name[100];
    long int pos;
    char text[100];
    char ch;
    printf("Enter source file name:\n");
    scanf("%90s",file1_name);
    if((fp = fopen(file1_name,"r")) == NULL) printf("Can not open this file\n");
    do
    {
        printf("Enter a pos:\n");
        scanf("%ld",&pos);
        fseek(fp,pos,SEEK_SET);
        fgets(text,100,fp);
        fputs(text,stdout);
        printf("want to continue?\n");
        while(getchar() != '\n') continue;
        ch = getchar();
        while(getchar() != '\n') continue;
    } while (ch == 'y' || ch == 'Y');
    fclose(fp);
    return 0;
}