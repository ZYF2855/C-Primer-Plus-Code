#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define MAXSIZE 12

struct seat_info
{
    int id;
    bool booked;
    char pass_fname[20];
    char pass_lname[20];
};

struct flight
{
    int flight_id;
    struct seat_info seat[MAXSIZE];
};
void menu0(struct flight * flight1);
void menu(struct seat_info * seat);
int a_func(const struct seat_info * seat);
void b_func(const struct seat_info * seat);
void d_func(struct seat_info * seat);
void e_func(struct seat_info * seat);
int main(void)
{
    struct flight flights[4] = 
    {
        {102,{0}},
        {311,{0}},
        {444,{0}},
        {519,{0}},
    };
    for(int i =0;i<4;i++)
    {
        for(int j =0;j<MAXSIZE;j++)
        {
            flights[i].seat[j].id = j+1;
            flights[i].seat[j].booked = false;
        }
    }//结构体初始化

    menu0(flights);
    return 0;
}

void menu0(struct flight * flight1)
{
    int id;
    char ch;
    while(1)
    {
        printf("Please select airplane No.(choice from 102,311,444,519):\n");
        scanf("%d",&id);
        for(int i =0;i<4;i++)
        {
            if(flight1[i].flight_id == id)
            {
                printf("Now your flight id is %d\n",flight1[i].flight_id);
                menu(flight1[i].seat);
            }
        }
        puts("want to continue?");
        ch = getchar();
        while(getchar()!='\n') continue;
        if(ch=='n'||ch=='N') break;
    }
    puts("Thanks for using!");
    
}

void menu(struct seat_info * seat)
{
    char chose,ch;

    puts("To choose a function, enter its letter label: ");
    puts("a) Show number of empty seats ");
    puts("b) Show list of empty seats ");
    puts("c) Show alphabetical list of seats ");
    puts("d) Assign a customer to a seat assignment ");
    puts("e) Delete a seat assignment");
    puts("f) Quit");
    while(1)
    {
        puts("Enter your chose:");
        while(getchar()!='\n') continue;
        chose = getchar();
        while(getchar()!='\n') continue;
        switch(chose)
        {
            case 'a':printf("it has %d empty seats\n",a_func(seat));break;
            case 'b':b_func(seat);break;
            case 'c':b_func(seat);break;
            case 'd':d_func(seat);break;
            case 'e':e_func(seat);break;
            case 'f':break;
            default:puts("Enter again!");break;
        }
        puts("want to continue?");
        ch = getchar();
        while(getchar()!='\n') continue;
        if(ch=='n'||ch=='N') break;
    }
    

}

int a_func(const struct seat_info * seat)
{
    int empty_count = 0;
    for(int i =0;i<MAXSIZE;i++)
    {
        if(seat[i].booked == false) empty_count++;
    }
    return empty_count;
}

void b_func(const struct seat_info * seat)
{
    for(int i =0;i<MAXSIZE;i++)
    {
        if(seat[i].booked == false)
        {
            printf("the %dth seat is empty\n",seat[i].id);
        }
    }
}

void d_func(struct seat_info * seat)
{
    int id;
    puts("chose your expectational seat num:");
    scanf("%d",&id);
    for(int i = 0;i<MAXSIZE;i++)
    {
        if(seat[i].id == id && seat[i].booked == false)
        {
            puts("Enter your name:");
            scanf("%s %s",seat[i].pass_fname,seat[i].pass_lname);
            seat[i].booked = true;
        }
    }
    puts("Finish booking!");
}

void e_func(struct seat_info * seat)
{
     int id;
    puts("chose your expectational unbooked seat num:");
    scanf("%d",&id);
    for(int i = 0;i<MAXSIZE;i++)
    {
        if(seat[i].id == id && seat[i].booked == true)
        {
            strcpy(seat[i].pass_fname,"");
            strcpy(seat[i].pass_lname,"");
            seat[i].booked = false;
        }
    }
    puts("Finish Delete!");
}