#include<stdio.h>
int main()
{
    char str[100];
    int i=0,length=0;
    printf("\nEnter a string : ");
    scanf("%[^\n]s",str); //gets(str); for not use scanf and scanf("[^\n]%s",str); for without spaces
    while(str[i] != '\0')
    {
        length++;
        i++;
    }
    printf("Length of string is = %d\n",length);
    return 0;
}