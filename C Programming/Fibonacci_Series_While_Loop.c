#include<stdio.h>
int main()
{
    int n,i=1;
    int a=0,b=1,c;
    printf("Enter the number of terms :");
    scanf("%d",&n);
    printf("Fibonacci Series : ");
    while(i<=n)
    {
        printf("%d",a);
        c = a + b;
        a = b;
        b = c;
        i++;
    }
    return 0;
}