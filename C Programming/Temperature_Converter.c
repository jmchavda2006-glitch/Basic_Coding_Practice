#include<stdio.h>
int main()
{
    float c;
    printf("Enter the temperature value (in celsius) : ");
    scanf("%f",&c);
    printf("\nThe Temperature in Fahrenheit = %f", 1.8*c+32);
    return 0;
}