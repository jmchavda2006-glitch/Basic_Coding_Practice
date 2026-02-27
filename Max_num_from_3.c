#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the first number : ");
    scanf("%d",&a);
    printf("Enter the second number : ");
    scanf("%d",&b);
    printf("Enter the third number : ");
    scanf("%d",&c);
    if (a>b && a>c)
        printf("The maximum number is %d", a);
    else if (b>a && b>c)
        printf("The maximum number is %d", b);
    else if (c>a && c>b)
        printf("The maximum number is %d", c);
    else
        printf("All numbers are equal %d", a);
    return 0;
}