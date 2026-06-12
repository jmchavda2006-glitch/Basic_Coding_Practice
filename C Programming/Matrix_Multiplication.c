#include<stdio.h>
int main()
{
    int A[10][10],B[10][10],C[10][10];
    int i,j,k;
    int r1,c1,r2,c2;
    printf("\nEnter No. of Rows and Column of Matrix 1 : ");
    scanf("%d %d", &r1,&c1);
    printf("\nEnter No. of Rows and Column of Matrix 2 : ");
    scanf("%d %d", &r2,&c2);
    if(c1 != r2)
    {
        printf("\nMatrix multiplication not possible!");
        return 0;
    }
    printf("\nEnter elements of Matrix 1 : \n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("\nEnter elements of Matrix 2 : \n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            C[i][j] = 0;
        }
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            for(k=0;k<c1;k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    printf("\nResultant Matrix : \n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}