#include<stdio.h>
#include<limits.h>
#include<float.h>
int main()
{
    printf(" ===== Data Type Size ====\n");
    printf("The size of 'int' databtype is %d bytes.\n",sizeof(int));
    printf("The size of 'float' datatype is %d bytes.\n",sizeof(float));
    printf("The size of 'double' datatype is %d bytes.\n",sizeof(double));
    printf("The size of 'char' datatype is %d bytes.\n",sizeof(char));

    printf(" ==== Maximun and Minimum ====\n");
    printf("\n=====Data Types Range=====\n");
    printf("int: %d to %d\n",INT_MIN, INT_MAX);
    printf("char: %d to %d\n",CHAR_MIN, CHAR_MAX);
    printf("double: %d to %d\n",DBL_MIN, DBL_MAX);
    printf("float: %d to %d\n",FLT_MIN, FLT_MAX);
    return 0;
}