#include<stdio.h>
int main()
{
    char ch;
    printf("Enter your character:");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
        printf("You entered CAPITAL character");
    else if(ch>='a' && ch<='z')
        printf("You entered small character");
    else if(ch>='0' && ch<='9')
        printf("You entered number");
    else
        printf("You entered Special Character");
    return 0;
}