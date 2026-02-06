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
int main(void)
{
    int chose = 0;
    menu();
    while(1)
    {
        printf("Choose your pay rate:");
        scanf("%d",&chose);
        if(chose == 5) break;
        switch(chose)
        {
            case 1:cal_number(Basic_pay1);break;
            case 2:cal_number(Basic_pay2);break;
            case 3:cal_number(Basic_pay3);break;
            case 4:cal_number(Basic_pay4);break;
            default: printf("Enter right number!");break;
        }
    }
    return 0;
}

void menu()
{
    for(int i = 0;i<20;i++)
    {
        printf("*");
    }
    printf("\nEnter the number corresponding to the desired pay rate or action:\n");
    printf("1) $8.75/hr\t");
    printf("2) $9.33/hr\n");
    printf("3) $10.00/hr\t");
    printf("4) $11.20/hr\n");
    printf("5) quit\n");
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
    printf("your pay is %.2f,your tax is %.2f,and you can get %.2f",pay,tax,pay-tax);
}