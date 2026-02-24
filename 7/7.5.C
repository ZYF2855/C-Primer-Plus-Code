#include <stdio.h>
int main(void)
{
    int guess_low = 0;
    int guess_high = 100;
    int guess = (guess_low+guess_high)/2;
    char respond;
    printf("Pick an integer from 0 to 100.I will try to guess.");
    printf("big or small or right:b s r");
    printf("Uh...is your number %d?\n",guess);
    while((respond = getchar()) != 'r')
    {
        if(respond == 'b')
        {
            guess_high = guess; 
            guess = ((guess_high - guess_low)/2)+guess_low; 
            printf("Well,then,is it %d?\n",guess);
        } 
        else if(respond == 's')
        {
            guess_low = guess;
            guess = ((guess_high - guess_low)/2)+guess_low; 
            printf("Well,then,is it %d?\n",guess);
        }
    }
    printf("I knew I could do it!\n");
    return 0;
}