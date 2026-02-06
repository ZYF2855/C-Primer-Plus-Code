#include <stdio.h>

#define Basic_pay 1000
#define Basic_time 40
#define Over_rate 1.5
#define pay1 300
#define pay2 450
#define rate1 0.15
#define rate2 0.2
#define rate3 0.25

int main(void)
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
    return 0;
}