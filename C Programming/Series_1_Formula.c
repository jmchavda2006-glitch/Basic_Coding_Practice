#include<stdio.h>
int main()
{
    int n,i;
    long sum = 0;
    printf("Enter the number of terms : ");
    scanf("%d",&n);
    sum = n * ( n+1 ) * ( 2*n + 1 ) / 6;
    printf("The series 1^2 + 2^2 + ... + n^2 = %ld" ,sum);
    return 0;
}