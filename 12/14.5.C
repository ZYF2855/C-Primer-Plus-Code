#include <stdio.h>
#include <string.h>
#define CSIZE 4
struct name
{
    char first_name[20];
    char last_name[20];
};
struct student
{
    struct name student_name;
    float grade[3];
    float grade_ave;
};
void get_student_grade(struct student * temp);
void printf_info(const struct student * temp);
void printf_class_grade_ave(const struct student * temp);
int main()
{
    struct student class1[CSIZE]=
    {
        {{"三","张"},{0,0,0},0.0},
        {{"四","李"},{0,0,0},0.0},
        {{"五","王"},{0,0,0},0.0},
        {{"六","赵"},{0,0,0},0.0},
    };
    get_student_grade(class1);
    printf_info(class1);
    printf_class_grade_ave(class1);
    return 0;
}
void get_student_grade(struct student * temp)
{
    char temp_in[40];
    char temp_name[40];
    for(int i = 0;i<CSIZE;i++)
    {
        printf("Enter student's name (e.g., 张三):\n");
        scanf("%s",temp_in);
        
        strcpy(temp_name, temp[i].student_name.last_name);
        strcat(temp_name, temp[i].student_name.first_name);
        
        if(strcmp(temp_in,temp_name) == 0)
        {
            printf("Enter three grades (separated by spaces):\n");
            scanf("%f %f %f",&temp[i].grade[0],&temp[i].grade[1],&temp[i].grade[2]);
            temp[i].grade_ave = (temp[i].grade[0] + temp[i].grade[1] + temp[i].grade[2]) / 3.0;
        }
        else
        {
            printf("Name not matched! Expected: %s\n", temp_name);
            i--;
        }
    }
    printf("Finish!\n");
}

void printf_info(const struct student * temp)
{
    printf("\n--- Student Information ---\n");
    for(int i = 0;i<CSIZE;i++)
    {
        printf("%s%s: grade1:%.2f, grade2:%.2f, grade3:%.2f, average:%.2f\n",
            temp[i].student_name.last_name,temp[i].student_name.first_name,
            temp[i].grade[0],temp[i].grade[1],temp[i].grade[2],temp[i].grade_ave);
    }
}
void printf_class_grade_ave(const struct student * temp)
{
    float ave = 0;
    for(int i = 0;i<CSIZE;i++)
    {
        ave+=temp[i].grade_ave;
    }
    ave /= CSIZE;
}