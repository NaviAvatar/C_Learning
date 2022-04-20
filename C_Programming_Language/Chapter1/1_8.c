#include<stdio.h>

// 统计 空格、制表符、换行符的个数
int main()
{
    int space = 0; 
    int tab = 0;
    int linebreak = 0;
    int c;
    while((c=getchar()) != EOF)
    {
        if(c == 32)
            space++;
        else  if(c == 10)
            linebreak++;
        else if(c == 9)
            tab++;
    }

    printf("空格个数：%d\n制表符个数：%d\n换行符个数%d\n", space, tab, linebreak);

    return 0;
}
