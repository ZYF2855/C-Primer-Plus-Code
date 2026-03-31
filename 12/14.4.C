#include <stdio.h>
#include <string.h>
void Print_func(const struct mode temp[],int size);
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
    Print_func(people,5);
    return 0;
}

void Print_func(const struct mode temp[],int size)
{
    for(int i = 0;i<size;i++)
    {
        if(strcmp(temp[i].middle_name,"N") != 0) 
            printf("%s, %s %c. -- %s",temp[i].last_name,temp[i].first_name,temp[i].middle_name[0],temp[i].insure_num);
        else
            printf("%s, %s -- %s",temp[i].last_name,temp[i].first_name,temp[i].insure_num);
        putchar('\n');
    }
}



/*
#include <stdio.h>
int main()
{
    return 0;
}
*/