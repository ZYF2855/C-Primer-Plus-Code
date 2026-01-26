#include "stdio.h"
int main(void)
{
    int code;
    printf("Please enter an ASCII code (0-127): ");
    scanf("%d", &code);
    printf("The character for ASCII code %d is '%c'\n", code, (char)code);
    return 0; 
}