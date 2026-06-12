#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character : ");
    scanf("%c",&ch);
    if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' )
    {
        printf("You entered a Vowel");
    }
    else
    {
        printf("You entered a Consonant");
    }
    return 0;
}