#include <stdio.h>
#include <ctype.h>
void get_a_word(char * word,int max_size);
int main(void)
{
    char word[50];
    get_a_word(word,5);
    puts(word);
    return 0;
}

void get_a_word(char * word,int max_size)
{
    char ch;
    while(isspace(ch = getchar())) continue;//屏蔽第一个字符前的空格
    do
    {
        *word = ch;
        word++;
        max_size--;
    } while (!isspace(ch = getchar()) && max_size);
    *word = '\0';
}   

