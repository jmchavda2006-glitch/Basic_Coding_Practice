#include<stdio.h>
int main()
{
    float k;
    printf("Enter the distance in Kilometer : ");
    scanf("%f",&k);
    printf("\nThe Distance in Meter is = %f", k*1000);
    printf("\nThe Distance in Feet is = %f", k*3280.84);
    printf("\nThe Distance in Inch is = %f", k*39370.079);
    printf("\nThe Distance in Centimeter is = %f", k*100000);
    return 0;
}