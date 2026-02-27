#include<stdio.h>
int main()
{
    int n,i;
    long sum = 0;
    printf("Enter the number of terms : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum = sum + ( i * i );
    }
    printf("The series 1^2 + 2^2 + ... + %d^2 = %ld" ,n,sum);
    return 0;
}