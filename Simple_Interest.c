#include<stdio.h>
int main()
{
    float i,p,r;
    int n;
    printf("Enter the value of Principal amount : ");
    scanf("%f",&p);
    printf("Enter the value of Rate of interest : ");
    scanf("%f",&r);
    printf("Enter the value of Number of years : ");
    scanf("%d",&n);
    printf("The Simple Interest i = %f", (p*r*n)/100);
    return 0;
}