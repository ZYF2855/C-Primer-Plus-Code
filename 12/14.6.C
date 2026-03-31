#include <stdio.h>
#include <string.h>
#define MAXSIZE 50
struct info
{
    int num;
    char first_name[20];
    char last_name[20];
    int appear_count;
    int hit_count;
    int base_runs;
    int RBI;
    float batting_average;
};
int read_data(struct info list[],FILE *fp);
int find_id(const struct info list[],int id,int count);
void count_batting_average(struct info * list,int len);
void show_info(const struct info list[], int n);
int main(void)
{
    FILE * fp;
    int length =0;
    char file_name[MAXSIZE] = {"1.txt"};
    struct info pro[MAXSIZE] = {0};
    if((fp = fopen(file_name,"r")) == NULL)
    {
        printf("Can not find this file!\n");
    }
    else printf("Find it!");
    length = read_data(pro,fp);
    count_batting_average(pro,length);
    show_info(pro,length);
    fclose(fp);
    return 0;
}
int read_data(struct info list[],FILE *fp)
{
    int count = 0;
    int id, game_times, hit_num, base_num, RBI;
    char first_name[20], last_name[20];
    int index;

    while ((fscanf(fp,
                   "%d %s %s %d %d %d %d",
                   &id, first_name, last_name, &game_times, &hit_num, &base_num, &RBI)) == 7)
                   {

        index = find_id(list,id,count);
        if(index == -1)
        {
            strcpy(list[count].first_name, first_name);
            strcpy(list[count].last_name, last_name);
            list[count].num = id;
            list[count].appear_count = game_times;
            list[count].hit_count = hit_num;
            list[count].base_runs = base_num;
            list[count].RBI = RBI;
            count++;
        }
        else
        {
            list[index].appear_count += game_times;
            list[index].hit_count += hit_num;
            list[index].base_runs += base_num;
            list[index].RBI += RBI;
        }
    }
    return count;
}

int find_id(const struct info list[],int id,int count)
{
    for(int i =0;i<count;i++)
    {
        if(list[i].num == id) return i;
    }
    return -1;
}

void count_batting_average(struct info * list,int len)
{
    for(int i = 0;i<len;i++)
    {
        list[i].batting_average = list[i].hit_count*1.0/list[i].appear_count;
    }
}

void show_info(const struct info list[], int n) 
{
    printf("ID: First_Name.Last_Name Game_Times Hit_Num Base_Num RBI BABIP\n");
    for (int i = 0; i < n; i++) {
        printf("%2d %10s.%-10s %5d %10d %7d %5d %5.2f\n",
               list[i].num, list[i].first_name, list[i].last_name,
               list[i].appear_count, list[i].hit_count, list[i].base_runs, list[i].RBI, list[i].batting_average);
    }
}