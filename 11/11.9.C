#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 41

int main(void)
{
    FILE *fp;
    char words[MAX];
    char last_word[MAX];
    int count;
    if ((fp = fopen("wordp.txt", "a+")) == NULL)//续写模式自动把指针放到文件结尾
    {
        printf("Can not open this file\n");
        exit(EXIT_FAILURE);
    }
    fseek(fp,0L,SEEK_SET);
    while(fgets(last_word,MAX,fp) != NULL)
    {
        if(isdigit(last_word[0]) && !isdigit(last_word[1]) ) count = last_word[0] - '0';
        else if(isdigit(last_word[0]) && isdigit(last_word[1])) count = (last_word[0] - '0')*10 + (last_word[1] - '0');
        else continue;
    } //从头开始遍历每行
    puts("Enter words to add to the file;press the #");
    puts("Key at the beginning of a line to terminate.");
    while ((fscanf(stdin, "%40s", words) == 1) && (words[0] != '#'))
    {
        count++;
        fprintf(fp, "%d%s\n", count, words);
    }
    puts("File contents:");
    rewind(fp); 
    while (fscanf(fp, "%s", words) == 1)
        puts(words);
    puts("Done!");
    fclose(fp);
    return 0;
}