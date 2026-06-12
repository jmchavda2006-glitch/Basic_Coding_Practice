#include<stdio.h>
int main()
{
    int n,i,pos,element,choice;
    int a[100];
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    printf("Enter elements of first array : \n ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n1. Insert \n2. Remove \n Enter your choice:");
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("\nEnter position to insert ( 1 to %d ) : ",n+1);
        scanf("%d",&pos);
        printf("\nEnter element to insert : ");
        scanf("%d",&element);
        for(i=n;i>=pos;i--)
        {
            a[i] = a[i-1];
        }
        a[pos-1]=element;
        n++;
        printf("\nArray after insertion : ");
        for(i=0;i<n;i++)
        {
            printf("%d ",a[i]);
        }
    }
    else if(choice==2)
    {
        printf("\nEnter position to delete (1 to %d) : ",n);
        scanf("%d",&pos);
        for(i=pos-1;i<n-1;i++)
        {
            a[i] = a[i+1];
        }
        n--;
        printf("\nArray after deletion : ");
        for(i=0;i<n;i++)
        {
            printf("%d ",a[i]);
        }
    }
    else
    {
        printf("\n Invalid Choice!");
    }
    return 0;
}