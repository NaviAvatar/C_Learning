#include<stdio.h>
#define IN 1
#define OUT 0

int main()
{
    int c;
    int isword = OUT;

    while((c = getchar()) != EOF)
    {
        if(c == '\n' || c == '\t' || c == ' ')
        {
            if(isword == IN)
            {
                printf("\n");
                isword = OUT;
            }
        }
        else if(isword == OUT)
        {
            isword = IN;
            putchar(c);
        }
        else
        {
            putchar(c);
        }
    }
    return 0;
}
