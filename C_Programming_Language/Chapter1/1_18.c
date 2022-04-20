#include<stdio.h>
#define MAXLINE 1000

 int my_getline(char line[], int maxline);
 int my_remove(char line[]);
int main()
{
    char line[MAXLINE];
    while(my_getline(line, MAXLINE) > 0)
    {
        if(my_remove(line) > 0)
            printf("%s\n", line);
    }
    return 0;
}

int my_getline(char s[], int lim)
{
    int c, i;

    for(i=0; i<lim-1 && (c=getchar()) != EOF && c != '\n'; ++i)
        s[i]=c;

    if(c == '\n')
    {
        s[i] = c;
        i++;
    }

    s[i]='\0';
    return i;
}

int my_remove(char line[])
{
    int i ;
    i = 0;

    while(line[i] != '\n')  // find new line character
        i++;
    
    --i;
    while(i >= 0 && (line[i] == ' ' || line[i] == '\t'))
        --i;
    
    if(i >= 0)
    {
        ++i;
        line[i]='\n';
        ++i;
        line[i]='\0';
    }
    return i;
}
