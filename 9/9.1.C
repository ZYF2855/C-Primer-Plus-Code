#include <stdio.h>
#define MONTHS 12
#define YEARS 5
int main(void)
{
    float rain[YEARS][MONTHS] =
    {
        {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
        {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
        {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
        {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
        {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6}
    };
    float (*pt) [MONTHS];
    float * pt2;
    pt = rain;
    pt2 = pt[0];
    float sum1,sum2;
    for(int i = 0 ;i<YEARS;i++)
    {
        pt2 = &rain[i][0];
        while(pt2 <= &rain[i][MONTHS-1])
        {
           sum1+=*pt2;
           pt2 = pt2+1;
        }
        printf("%d th years all is %.2f\n",i+1,sum1);
        sum2 +=sum1;
        sum1 = 0;
        pt = pt + 1;
    }
    printf("eve is %f",sum2/YEARS);
   
    return 0;
}