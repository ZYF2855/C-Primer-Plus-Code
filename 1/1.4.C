#include "stdio.h"
void jolly()
{
    for(int i = 0; i < 3; i++)
    {
        printf("For he's a jolly good fellow!\n");
    }
}
void deny()
{
    printf("Which nobody can deny!\n");
}
int main(void)
{
    jolly();
    deny();
    return 0;
}