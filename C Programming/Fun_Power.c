#include<stdio.h>
double Power(int x,int y)
{
    double result = 1;
    if(y >= 0)
    {
        for(int i=1;i<=y;i++)
        {
            result = result * x;
        }
    }
    else 
    {
        for(int i=1;i<=-y;i++)
        {
            result = result * x;
            result = 1 / result;
        }
    }
    return result;
}
int main()
{
    int x,y;
    printf("Enter x and y : ");
    scanf("%d %d",&x,&y);
    printf("Result = %.2lf", Power(x,y));
    return 0;
}