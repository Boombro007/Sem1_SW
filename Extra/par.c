
#include <stdio.h>
int main()
{
    int x=6;
    printf("%d", x++ + x++);
    return 0;
    /* for (x++ + ++x) gives 14 vslue because of assignment operator used by computer so its logically error*/
}