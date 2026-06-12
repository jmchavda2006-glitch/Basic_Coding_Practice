#include<stdio.h>
int main()
{
    int n,i;
    long long fact = 1;
    printf("Enter the number : ");
    scanf("%d",&n);
    if(n<0)
        printf("Factorial is not defines for negative numbers!");
    else
        for(i=1;i<=n;i++)
        {
            fact = fact * i;
        }
        printf("The factorial of %d = %lld",n,fact);
    return 0;    
}