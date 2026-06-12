#include<stdio.h>
int main()
{
    int n,i;
    float num,sum=0,avg;
    printf("How much numbers do you want to enter ? ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("Enter the number %d : ",i);
        scanf("%f",&num);
        sum = sum + num;
    }
    avg = sum / n;
    printf("The sum of numbers is = %.2f", sum);
    printf("\n The average of numbers is = %.2f", avg);
    return 0;
}