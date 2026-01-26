#include <stdio.h>
int main(void)
{
    char name1[50],name2[50];
    printf("Enter your name:");
    scanf("%s %s",name1,name2);
    printf("%20s,%20s",name2,name1);
    return 0;
}
