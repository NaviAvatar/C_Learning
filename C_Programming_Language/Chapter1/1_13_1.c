#include<stdio.h>
#define MAXHIST 15  // max length of histogram
#define MAXWORD 11  // max length of a word
#define IN 1        // inside a word
#define OUT 0       // outside a word

int main()
{
    int c, i, nc, state;
    int len;
    int maxvalue;   // maximum value for wl[]
    int ovrflow=0;   // number of overflow words
    int wl[MAXWORD]; // word length counters

    state = OUT;    
    nc = 0;     // number of words >= MAXWORD
    for(i = 0; i < MAXWORD; ++i)
        wl[i] = 0;
    while((c = getchar()) != EOF)
    {
        if(c == ' ' || c == '\n' || c == 't')
        {
            state = OUT;
            if(nc > 0)
            {
                if(nc < MAXWORD)
                    ++wl[nc];
                else
                    ++ovrflow;
            }
            
            nc = 0;
        }
        else if(state == OUT)
        {
            state = IN;
            nc = 1;     // begin of a new word
        }
        else
            ++nc;
    }

    maxvalue = 0;
    for(i =1; i < MAXWORD; ++i)
    {
        if(wl[i]>maxvalue)
            maxvalue = wl[i];
    }

    for(i = MAXHIST; i > 0; --i)
    {
       for(int j = 1; j < MAXWORD; ++j)
       {
           if(wl[j]*MAXHIST / maxvalue >= i)
               printf(" * ");
           else
               printf("  ");
       }

       putchar('\n');
    }

    for(i = 1; i < MAXWORD; ++i)
        printf("%3d", i);
    putchar('\n');
    for(i = 1; i < MAXWORD; ++i)
        printf("%3d ", wl[i]);
    putchar('\n');

    if(ovrflow > 0)
        printf("There are %d words >= %d \n", ovrflow, MAXWORD);
    return 0;
}
