#include <stdio.h>
#include <string.h>
void Print_func(char * insure_num,char * first_name,char * middle_name,char * last_name);
struct mode
{
    char insure_num[10];
    struct 
    {
        char first_name[20];
        char middle_name[20];
        char last_name[20];
    };
};

int main()
{
    struct mode people[5]={
        {"302039823",{"Flossie","MICK","Dribble"}},
        {"302039824",{"ROMIO","JACK","JULE"}},
        {"302039825",{"JULY","ROSE","APRIL"}},
        {"302039826",{"MICK","N","JACKSON"}},
        {"302039827",{"MACK","N","DONAL"}},
    };
    for(int i = 0;i<5;i++)
    {
        Print_func(people[i].insure_num,people[i].first_name,people[i].middle_name,people[i].last_name);       
    }
    return 0;
}

void Print_func(char * insure_num,char * first_name,char * middle_name,char * last_name)
{
    
    if(strcmp(middle_name,"N") != 0) 
        printf("%s, %s %c. -- %s",last_name,first_name,middle_name[0],insure_num);
    else
        printf("%s, %s -- %s",last_name,first_name,insure_num);
    putchar('\n');
    
}
