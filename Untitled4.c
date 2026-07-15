#include<stdio.h>
#include<conio.h>

void main()
{
    int A[3],B[3],C[3];
    int i;

    printf("enter 3 integers for array A:\n");
    for(i=0;i<3;i++)
        {
            scanf("%d",&A[i]);
        }
    printf("enter 3 integers for array B:\n");
    for(i=0;i<3;i++)
        {
            scanf("%d",&B[i]);
        }
    for (i=0;i<3;i++)
        {
            C[i]=A[i]+B[i];
        }
    printf("resultant array C (A+B):\n");
    for(i=0;i<3;i++)
        {
            scanf("%d",C[i]);
        }
    printf("\n");



getch();
}
