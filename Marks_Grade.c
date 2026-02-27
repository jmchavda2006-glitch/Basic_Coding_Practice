#include<stdio.h>
int main()
{
    float m;
    printf("Enter your marks: ");
    scanf("%f",&m);
    if(m<=100 && m>=80)
        printf(" You Acheived Destiction Grade! ");
    else if(m<=79 && m>=60)
        printf(" You Acheived First Class Grade! ");
    else if(m<=59 && m>=40)
        printf(" You Acheived Second Class Grade! ");
    else if(m<40 && m>=0)
        printf(" You are failed! ");
    else
        printf(" Invalid Marks! ");
    return 0;
}