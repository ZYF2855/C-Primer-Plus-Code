#include <stdio.h>
#define Conersion_parameter 60
int main(void)
{
    while(1)
    {
        int minutes;
        printf("Enter the number of minutes: ");
        scanf("%d",&minutes);
        if(minutes < 0)
        {
            break;
        }
        else 
        {
            int hour = minutes / Conersion_parameter;
            int minute = minutes-hour * Conersion_parameter;
            printf("%d minutes is %d hour(s) and %d minute(s).\n",minutes,hour,minute);
        }
    }
    return 0;
}