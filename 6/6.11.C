#include <stdio.h>
#define yangji 2.05
#define tiancai 1.15
#define carrot 1.09
int main(void)
{
    float yangji_weight = 0;
    float tiancai_weight = 0;
    float carrot_weight = 0;
    float weight;
    char a;
    float pay_before;
    float weight_sum;
    float pay2;
    float pay_cost;
    while(1)
    {
        a=getchar();
        if(a == 'p') break;
        switch(a)
        {
            case 'a':
            {
                printf("Enter your aim weight of yangji:");
                scanf("%f",&weight);
                yangji_weight+=weight;
                break;
            }
            case 'b':
            {
                printf("Enter your aim weight of tiancai:");
                scanf("%f",&weight);
                tiancai_weight+=weight;
                break;
            }
            case 'c':
            {
                printf("Enter your aim weight of carrot:");
                scanf("%f",&weight);
                carrot_weight+=weight;
                break;
            }
        }
    }
    weight_sum = yangji_weight+tiancai_weight+carrot_weight;
    pay_before = yangji_weight*yangji + tiancai_weight*tiancai + carrot_weight*carrot;
    if(weight_sum<=5) pay2=6.5;
    else if(weight_sum<=20) pay2=14;
    else if(weight_sum<100) pay2=14+(weight_sum-20)*0.5;
    if(pay_before>=100) pay_cost = pay_before*0.05;
    if(pay_cost!=0) 
    {
        printf("%.2f %.2f %.2f %.2f %.2f %.2f %.2f %.2f",yangji,tiancai,carrot,pay_before,pay_before,pay_cost,pay2,pay_before+pay2-pay_cost);
    }
    else 
    {
        printf("%.2f %.2f %.2f %.2f %.2f %.2f %.2f",yangji,tiancai,carrot,pay_before,pay_before,pay2,pay_before+pay2);
    }
    return 0;
}