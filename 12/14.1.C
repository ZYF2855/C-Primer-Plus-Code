#include <stdio.h>
#include <string.h>
#define NUM 12
struct month
{
    char name[20];
    char name_suo[20];
    int day_count;
    char name_pinyin[20];
};
//enum pinyin {yiyue = 1,eryue,sanyue,siyue,wuyue,liuyue,qiyue,bayue,jiuyue,shiyue,shiyiyue,shieryue};
int main()
{
    struct month months[NUM] = {
        {"Janurary","Jan",31,"yiyue"},
        {"February","Feb",28,"eryue"},
        {"March","Mar",31,"sanyue"},
        {"April","Apr",30,"siyue"},
        {"May","May",31,"wuyue"},
        {"June","Jun",30,"liuyue"},
        {"July","Jul",31,"qiyue"},
        {"August","Aug",31,"bayue"},
        {"September","Sep",30,"jiuyue"},
        {"October","Oct",31,"shiyue"},
        {"November","Nov",30,"shiyiyue"},
        { "December","Dec",31,"shieryue"},
    };
    char temp[20];
    int day_res = 0;
    printf("Enter a month(pinyin)\n");
    scanf("%20s",temp);
    for(int i = 0;i<NUM;i++)
    {
        day_res += months[i].day_count;
        if(strcmp(temp,months[i].name_pinyin) == 0) break;
    }
    printf("The day of the year is %d\n",day_res);
    return 0;
}