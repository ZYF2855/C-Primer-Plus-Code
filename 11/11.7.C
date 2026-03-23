#include <stdio.h>
int main(void)
{
    //int ch;
    FILE *fp1,*fp2;
    char file1_name[100];
    char file2_name[100];
    char temp1[1000];
    char temp2[1000];
    int file1_end = 0;
    int file2_end = 0;
    //int line_count1,line_count2;
    printf("Enter source file name:\n");
    scanf("%90s",file1_name);
    printf("Enter aim file name:\n");
    scanf("%90s",file2_name);
    if((fp1 = fopen(file1_name,"r")) == NULL) printf("Can not find file1\n");
    if((fp2 = fopen(file2_name,"r")) == NULL) printf("Can not find file2\n");

    while(!file1_end || !file2_end)//fgets读到换行或者EOF停止 || && 有屏蔽机制
    {
        if(!file1_end)
        {
            if(fgets(temp1,1000,fp1) != NULL)
            {
                fputs(temp1,stdout);
                int len = 0;
                while(temp1[len] != '\0') len++;
                if(len > 0 && temp1[len-1] != '\n')
                {
                    putchar('\n');
                }
            }
            else file1_end = 1;
        }
        if(!file2_end)
        {
            if(fgets(temp2,1000,fp2) != NULL)   
            {
                fputs(temp2,stdout);
                
                int len = 0;
                while(temp2[len] != '\0') len++;
                if(len > 0 && temp2[len-1] != '\n')
                {
                    putchar('\n');
                }
            }
            else 
            {
                file2_end = 1;
            }
        }
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
    //fgets会保存换行，而fputs不会自动添加换行，当文
    //件结束EOF时fputs输出就会不产生换行，故通过检测字符串最后有没有换行来防止这种情况
}

/* (b) 删除换行符从而实现不自动换行
while(!file1_end || !file2_end)//fgets读到换行或者EOF停止 || && 有屏蔽机制
    {
        if(!file1_end)
        {
            if(fgets(temp1,1000,fp1) != NULL)
            {
                int len = 0;
                while(temp1[len] != '\0') len++;
                if(len > 0 && temp1[len-1] == '\n')
                {
                    temp1[len-1] = '\0';
                }
                fputs(temp1,stdout);
            }
            else file1_end = 1;
        }
        if(!file2_end)
        {
            if(fgets(temp2,1000,fp2) != NULL)   
            {
                int len = 0;
                while(temp2[len] != '\0') len++;
                if(len > 0 && temp2[len-1] == '\n')
                {
                    temp2[len-1] = '\0';
                }
                fputs(temp2,stdout);
            }
            else 
            {
                file2_end = 1;
            }
        }
        putchar('\n');
    }
*/