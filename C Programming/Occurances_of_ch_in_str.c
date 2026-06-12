#include<stdio.h>
int main()
{
    char str[100],ch;
    int count=0,i=0;
    printf("Enter a string : ");
    scanf("%[^\n]s",str);
    getchar();
    printf("Enter character to count :");
    scanf("%c",&ch);
    while(str[i] != '\0')
    {
        if(str[i] == ch)
        {
            count++;
        }
        i++;
    }
    printf("Occurances of '%c' = %d",ch,count);
    return 0;
}