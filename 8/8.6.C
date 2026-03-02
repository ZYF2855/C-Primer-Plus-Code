#include <stdio.h>
void func(double *a,double *b,double *c);
void func2(double a,double b,double c);
int main(void)
{
    double a = 3.145;
    double c = 4.324;
    double b = 9.90;
    func2(a,b,c);
    printf("first :%lf %lf %lf\n",a,b,c);

    func(&a,&b,&c);
    printf("second :%lf %lf %lf",a,b,c);
    return 0;
}
void func(double *a,double *b,double *c)
{
    double max = *a;
    double min = *a;
    double middle;
    if(*b>max) max = *b;
    if(*c>max) max = *c;
    if(*b<min) min = *b;
    if(*c<min) min = *c;
    if(max == *a && min == *c) middle = *b;
    if(max == *b && min == *c) middle = *a;
    if(max == *a && min == *b) middle = *c;
    if(max == *b && min == *a) middle = *c;
    if(max == *c && min == *a) middle = *b;
    if(max == *c && min == *b) middle = *a;
    *a = min;
    *b = middle;
    *c = max;
}

void func2(double a,double b,double c)
{
    double max = a;
    double min = a;
    double middle;
    if(b>max) max = b;
    if(c>max) max = c;
    if(b<min) min = b;
    if(c<min) min = c;
    if(max == a && min == c) middle = b;
    if(max == b && min == c) middle = a;
    if(max == a && min == b) middle = c;
    if(max == b && min == a) middle = c;
    if(max == c && min == a) middle = b;
    if(max == c && min == b) middle = a;
    a = min;
    b = middle;
    c = max;
}


/*
只有用指针才能修改实参实际参数，否则函数只能修改形参而无法直接修改实参
*/