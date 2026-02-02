#include <stdio.h>
#define Feet_to_cm 30.48
#define INCH_to_cm 2.54
int main(void)
{
    while(1)
    {
        float height;
        printf("Enter your height:");
        scanf("%f",&height);
        if(height<=0) break;
        else
        {
            int feet = (int)(height / Feet_to_cm);
            float inch = (height - feet * Feet_to_cm)/INCH_to_cm;
            printf("%.1f = %d feet, %.1f inches\n",height,feet,inch);
        }
    }
    return 0;
}