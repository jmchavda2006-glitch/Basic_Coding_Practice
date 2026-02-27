#include<stdio.h>
long double factorial(int n)
{
    long double fact=1;
    for(int i=1;i<=n;i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int n;
    long double sum=1.0;
    printf("Enter the number of terms : ");
    fflush(stdout);
    scanf("%d",&n);
    for(int i=2;i<=n;i++)
    {
        sum = sum + 1.0 / factorial(i);
    }
    printf("The series 1+1/2!+1/3!+1/4!+.....+1/n! = %.6Lf" ,sum);
    return 0;
}