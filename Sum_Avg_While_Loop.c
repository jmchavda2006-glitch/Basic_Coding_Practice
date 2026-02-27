#include<stdio.h>
int main()
{
    int count=0;
    float num,sum=0,avg;
    printf("Enter the numbers ( -1 to Stop ) ");
    while(1)
    {
        scanf("%f",&num);
        if(num == -1)
        break;
        sum = sum + num;
        count++;
    }
    if(count==0)
    {
        printf("No numbers entered!");
    }
    else
    {
        printf("The sum of numbers is = %.2f", sum);
        printf("\n The average of numbers is = %.2f", sum/count);
    }
    return 0;
}