#include<stdio.h>
#define MAXLINE 1000

 int my_getline(char line[], int maxline);
void my_reverse(char line[]);
int main()
{
    int len = 0;
    char line[MAXLINE];
    while(my_getline(line, MAXLINE) > 0)
    {
        my_reverse(line);
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

void my_reverse(char line[])
{

    int len;
    char tmp;
    for(len = 0; line[len] != '\0'; len++)
    		;
    		
    for(int low = 0, high = len - 1;low < high ;low++, high--)
    {
        tmp = line[low];
        line[low] = line[high];
        line[high] = tmp;
    }
}
