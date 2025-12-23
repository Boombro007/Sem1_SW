//program-2
#include <stdio.h>
int main() {
    int r,c;
    printf("enter rows and columns : ");
    scanf("%d %d",&r,&c);
    int a[r][c];
    int a1[r][c];
    int *p = &a[0][0];  // Pointer to first element of 2D array
    int i;
    int *p1=&a1[0][0];

    printf("---- Matrix - 1 ----\n");

    // Using a single pointer, scan elements as if 1D array of size rows*cols
    for (i = 0; i < r * c; i++) {
        printf("Element %d : ",i+1);
        scanf("%d", p + i);
    }
    printf("---- Matir - 2 ----\n");
    for (i = 0; i < r * c; i++) {
        printf("Element %d : ",i+1);
        scanf("%d", p1 + i);

    }
    int arr2[r][c];
    int *p2=&a2[0][0];
    printf("---- Result ----\n");
    for(i=0;i<r * c;i++)
    {
        *(p2+i)=*(p+i)+*(p1+i);
        printf("%d ",*(p2+i));
        if((i+1)%c==0)
        printf("\n");
    }
    return 0;
}