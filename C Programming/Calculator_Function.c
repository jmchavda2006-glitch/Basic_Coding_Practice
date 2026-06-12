#include<stdio.h>
float add(float a,float b)
{
    return a + b;
}
float sub(float a,float b)
{
    return a - b;
}
float mul(float a,float b)
{
    return a * b;
}
float divide(float a,float b)
{
    return a / b;
}
int main()
{
    float num1,num2;
    char op;
    printf("Enter two numbers : ");
    scanf("%f %f",&num1,&num2);
    printf("Enter operation (+,-,*,/) : ");
    scanf(" %c",&op);
    switch(op)
    {
        case '+':
            printf("Result = %.2f ", add(num1,num2));
            break;
        case '-':
            printf("Result = %.2f ", sub(num1,num2));
            break;
        case '*':
            printf("Result = %.2f ", mul(num1,num2));
            break;
        case '/':
            if(num2 != 0)
            {
                printf("Result = %.2f ", divide(num1,num2));
            }
            else
            {
                printf("Can't divide by Zero!");
            }
            break;
        default:
            printf("Invalid Operator!");
    }
    return 0;
}