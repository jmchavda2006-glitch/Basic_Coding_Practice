#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100], str2[100], str3[100];
    int i=0,j=0;
    printf("Enter string 1 : ");
    scanf("%[^\n]s",str1);
    getchar(); //clear buffer
    printf("Enter string 2 : ");
    scanf("%[^\n]s",str2);
    //length
    printf("The length of first string is = %d\n",strlen(str1));
    printf("The length of second string is = %d\n",strlen(str2));
    //copy
    strcpy(str3,str1);
    printf("Copied first string in string 3 : %s\n",str3);
    strcat(str1,str2);
    printf("After concatenation : %s\n",str1);
    //
    if(strcmp(str2,str3) == 0)
    {
        printf("Second string and copied string are equal");
    }
    else
    {
        printf("Second string and copied string are not equal");
    }
    return 0;
}