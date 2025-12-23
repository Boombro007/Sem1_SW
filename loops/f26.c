#include<stdio.h>
int main()
{
    int c,space,new_line,tab,others;
    space = 0;
    new_line = 0;
    tab = 0;
    others = 0;
    while((c = getchar()) != EOF )
    {
        if(c == '\n')
        {
            ++new_line;
        }
        else if(c == '\t')
        {
            ++tab;
        }
        else if(c == ' ')
        {
            ++space;
        }
        else
        {
            ++others;
        }
    }
    printf("Newlines: %d\nTabs: %d\nSpaces: %d\nOther characters: %d\n", new_line, tab, space, others);
    return 0;
}                   