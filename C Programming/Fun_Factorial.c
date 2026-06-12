#include<stdio.h>
long factorial(int n)
{
    long fact = 1;
    for(int i=1;i<=n;i++)
    fact = fact * i;
    return fact; 
}
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("The factorial of %ld",factorial(num));
}