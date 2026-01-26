#include "stdio.h"
int main(void)
{
    float a;
    printf("Please enter a floating-point number: ");
    scanf("%f",&a);
    printf("fixed-point notation:%f\n",a);
    printf("scientific notation:%e\n",a);
    printf("p notation:%a\n",a);
    getchar();
    return 0;
}
