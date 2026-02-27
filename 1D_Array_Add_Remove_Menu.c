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
    do  
    {
        printf("\n1. Insert \n2. Remove \n3. Exit\n Enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
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
                break;
            case 2 :
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
            case 3 :
                printf("\nExiting Program...");
                break;
            defaulf :      
                printf("\n Invalid Choice!");
        }
    
    }
    while (choice!=3);
    return 0;
}