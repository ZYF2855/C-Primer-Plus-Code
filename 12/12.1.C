#include <stdio.h>
#define NUM 12
struct month
{
    char name;
    char name_short;
    int  days_count;
    char  months_pinyin;
};//结构体里是数组或者用结构数组
int main(void)
{
    struct month months[12];
    return 0;
}