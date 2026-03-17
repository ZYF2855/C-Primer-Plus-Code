#include <stdio.h>
#include <ctype.h>
void get_a_word(char * word);
int main(void)
{
    char word[50];
    get_a_word(word);
    puts(word);
    return 0;
}

void get_a_word(char * word)
{
    char ch;
    while(isspace(ch = getchar())) continue;//屏蔽第一个字符前的空格
    do
    {
        *word = ch;
        word++;
    } while (!isspace(ch = getchar()));
    *word = '\0';
}   

