#include <stdio.h>

#define Basic_pay1 8.75
#define Basic_pay2 9.33
#define Basic_pay3 10.00
#define Basic_pay4 11.20
#define Basic_time 40
#define Over_rate 1.5
#define pay1 300
#define pay2 450
#define rate1 0.15
#define rate2 0.2
#define rate3 0.25
void menu();
void cal_number(float Basic_pay);
char get_first(void);
char get_choice(void);
int main(void)
{
    char chose;
    menu();
    //printf("\nChoose your pay rate:");
    while((chose = get_choice())!='q')
    {
        //printf("\nChoose your pay rate:");
        switch(chose)
        {
            case 'a':cal_number(Basic_pay1);break;
            case 'b':cal_number(Basic_pay2);break;
            case 'c':cal_number(Basic_pay3);break;
            case 'd':cal_number(Basic_pay4);break;
            default: printf("Enter right choices!");break;
        }
    }
    printf("Bye!");
    return 0;
}

void menu()
{
    for(int i = 0;i<20;i++)
    {
        printf("*");
    }
    printf("\nEnter the number corresponding to the desired pay rate or action:\n");
    printf("a) $8.75/hr\t");
    printf("b) $9.33/hr\n");
    printf("c) $10.00/hr\t");
    printf("d) $11.20/hr\n");
    printf("q) quit\n");
    for(int i = 0;i<20;i++)
    {
        printf("*");
    }
}
void cal_number(float Basic_pay)
{
    float work_time;
    float pay;
    float tax;
    printf("Enter your work time:");
    scanf("%f",&work_time);
    if(work_time<=Basic_time) pay = work_time*Basic_pay;
    else pay = Basic_time*Basic_pay+(work_time-Basic_time)*1.5*Basic_pay;
    if(pay <= pay1) tax = pay*rate1;
    else if(pay <= rate2) tax = pay1*rate1+(pay-pay1)*rate2;
    else tax = pay1*rate1+(pay2-pay1)*rate2+(pay- pay2)*rate3;
    printf("your pay is %.2f\nyour tax is %.2f\nand you can get %.2f",pay,tax,pay-tax);
}
char get_choice(void)
{
    int ch;
    printf("\nChoose your pay rate:");
    ch = get_first();
    while((ch<'a' || ch >'d')&& ch!='q')
    {
        printf("!!!!");
        ch = get_first();
    }
    return ch;
}

char get_first(void)
{
    int ch;
    int bh;
    
    // 跳过换行符，等待有效输入
    while((ch = getchar()) == '\n')
    {
        continue;
    }
    
    // 清除输入缓冲区直到换行
    while((bh = getchar()) != '\n' && bh != EOF)
    {
        continue;
    }
    
    return ch;
}

/*
getchar（）函数读取单个字符，但是输入的数据会放入输入缓冲区，可以通过while将输入缓冲区数据挑选
从而实现识别有需要的字符的目的。
调用一次getchar函数相当于从缓冲区读取一个字符

*/