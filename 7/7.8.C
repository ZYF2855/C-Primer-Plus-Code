#include <stdio.h>
char get_choice();
void calculator(char func);
int main(void)
{
    char ch;
    while((ch = get_choice())!='q')
    {
        calculator(ch);
    }
    printf("Thanks for using!");
    return 0;
}

char get_choice()
{
    char ch;
    printf("Enter the operation of your choice:\n");
    printf("a.add\t        s.subtract\t\t\n");
    printf("m.multiply\td.divide\t\t\n");
    printf("q.quit\n");
    while((ch = getchar()) == '\n') continue;
    //ch = getchar();
    while(getchar()!='\n') continue;
    return ch;
}

void calculator(char func)  //非法输入需要修改s
{
    float n1,n2;
    int r1,r2;
    printf("Enetr first number:\n");
    while(1) 
    {
        char ch;
        r1 = scanf("%f",&n1);
        if(r1 == 1) 
        {   
            while((ch = getchar())!='\n') continue;
            break;
        }
        else
        {
            printf("Please enter a number.\n");
            while((ch = getchar())!='\n') continue;
        }
    }
    printf("Enetr second number:\n");
    while(1) 
    {
        char ch;
        r2 = scanf("%f",&n2);
        if(r2 == 1) 
        {   
            while((ch = getchar())!='\n') continue;
            break;
        }
        else
        {
            printf("Please enter a number.\n");
            while((ch = getchar())!='\n') continue;
        }
    }
    if(func == 'd' && n2==0)
    {
        printf("Enter a number other than 0:");
        while(scanf("%f",&n2)!=1) 
        {
            printf("Please enter a number.\n");
        }
    } 
    switch(func)
    {
        case 'a':printf("%f + %f = %f\n",n1,n2,n1+n2);break;
        case 's':printf("%f - %f = %f\n",n1,n2,n1-n2);break;
        case 'm':printf("%f * %f = %f\n",n1,n2,n1*n2);break;
        case 'd':printf("%f / %f = %f\n",n1,n2,n1/n2);break;
        default:break;
    }
}

/*
scanf和getchar一样，读取的是缓冲区中的数据，清除缓冲区常用方法就是1.while（getchar（）！=‘\n’）2.fflush（stdin）
*/