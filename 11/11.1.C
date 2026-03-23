#include <stdio.h>
#include <string.h>
int main(void)
{
    int ch;
    FILE * fp;
    char file_name[100];
    printf("Enter your aim file name:\n");
    //gets()会出现越界情况
    //gets_s(file_name,90); //c11编译器新加
    //fgets(file_name,90,stdin); //读取的时候会保存换行符号
    scanf("%90s",file_name); //不会保存换行符
    if((fp = fopen(file_name,"r")) == NULL) printf("Can not find this file:%s\n",file_name);
    while((ch = getc(fp)) != EOF)
    {
        putc(ch,stdout);
        
    }
    fclose(fp);
    printf("\n");
    printf("file has closed!\n");
    return 0;
}