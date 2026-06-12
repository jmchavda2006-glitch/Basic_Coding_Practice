#include <stdio.h>
long double factorial(int n) 
{
    long double fact = 1.0;
    for (int i = 1; i <= n; i++) 
    {
        fact *= i;
    }
    return fact;
}
int main() 
{
    int n;
    long double sum = 1.0;
    printf("Enter the number of terms: ");
    fflush(stdout);  
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) 
    {
        sum += 1.0 / factorial(i);
    }
    printf("The series 1 + 1/1! + 1/2! + ... + 1/%d! = %.6Lf\n", n, sum);
    return 0;
}
