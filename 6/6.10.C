#include <stdio.h>
#define rate1 0.15
#define rate2 0.28
#define type1 17850
#define type2 23900
#define type3 29750
#define type4 14875
int main(void)
{
    int type ;
    double salary;
    double type_tax;
    double tax;
    while(1)
    {
        printf("enter your type:");
        scanf("%d",&type);
        printf("enter your salary:");
        scanf("%lf",&salary);
        switch(type)
        {
            case 1 :type_tax = type1;break; 
            case 2 :type_tax = type2;break; 
            case 3 :type_tax = type3;break; 
            case 4 :type_tax = type4;break;
        }
        if(salary<=type_tax) tax = salary*rate1;
        else tax = type_tax*rate1+(salary-type_tax)*rate2;
        printf("you need pay %.2lf taxes",tax);
    }
    return 0;
}