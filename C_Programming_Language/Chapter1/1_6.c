#include<stdio.h>
#define MAXLINE 1000    // 允许输入的最长的行

int my_getline(char line[], int maxline);
void my_copy(char to[], char from[]);

int main()
{
    int len;    // current length
    int max;    // current discovery length
    char line[MAXLINE]; // the current words
    char longest[MAXLINE];  // to save the longest words

    max = 0;
    while((len = my_getline(line, MAXLINE))>0)
    {
        if(len > max)
        {
            max = len;
            my_copy(longest, line);
        }
    }

    if(max > 0)
        printf("%s", longest);
    
    return 0;
}

int my_getline(char s[], int lim)
{
    int c, i;

    for(i=0; i<lim-1 && (c = getchar()) != EOF && c != '\n'; i++)
        s[i]=c;

    if(c == '\n')
    {
        s[i] = c;
        i++;
    }
    s[i] = '\0';
    return i;
}

void my_copy(char to[], char from[])
{
    int i;

    i = 0;
    while((to[i] = from[i]) != '\0')
        ++i;
}

