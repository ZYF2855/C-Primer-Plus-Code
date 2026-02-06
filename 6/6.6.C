#include <stdio.h>
int main(void)
{
    char before_this;
    char this_letter;
    int count = 0;
    while(1)
    {
        this_letter = getchar();
        if(this_letter == '#') break;
        if(this_letter == 'i' && before_this =='e')
        {
            count++;
        }
        before_this = this_letter;
    }
    printf("ei has happened %d times",count);
    return 0;
}