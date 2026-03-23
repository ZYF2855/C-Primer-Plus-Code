#include <stdio.h>
#include <ctype.h>
int main(void)
{
    int ch;
    FILE *fp1,*fp2;
    char file1_name[100];
    char file2_name[100];
    printf("Enter source file name:\n");
    scanf("%90s",file1_name);
    printf("Enter aim file name:\n");
    scanf("%90s",file2_name);
    if((fp1 = fopen(file1_name,"r")) == NULL) printf("Can not find source file\n");
    fp2 = fopen(file2_name,"w+");
    while((ch = getc(fp1)) != EOF)
    {
        putc(toupper(ch),fp2);
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}