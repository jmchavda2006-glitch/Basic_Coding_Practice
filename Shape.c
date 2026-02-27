#include<stdio.h>
int main()
{
    int a,b,c,r;
    float pie=3.14;
    char shape;
    printf("Select your Shape (1.Square,2.Rectangle,3.Triangle,4.Circle) :");
    scanf(" %c",&shape);
    switch(shape)
    {
        case '1':
            printf("\nSquare");
            printf("\nEnter the size of side : ");
            scanf("%d",&a);
            printf("\nThe perimeter of Square is = %d", 4*a);
            printf("\nThe area of Square = %d", a*a);
            break;
        case '2':
            printf("\nRectangle");
            printf("\nEnter the size of side 1 : ");
            scanf("%d",&a);
            printf("\nEnter the size of side 2 : ");
            scanf("%d",&b);
            printf("\nThe perimeter of Rectangle is = %d", 2*(a+b));
            printf("\nThe area of Rectangle = %d", a*b);
            break;
        case '3':
            printf("\nTriangle");
            printf("\nEnter the size of base : ");
            scanf("%d",&a);
            printf("\nEnter the size of height : ");
            scanf("%d",&b);
            printf("\nEnter the size of diagonal : ");
            scanf("%d",&c);
            printf("\nThe perimeter of Triangle is = %d", a+b+c);
            printf("\nThe area of Triangle = %d", (a*b)/2);
            break;
        case '4':
            printf("\nCircle");
            printf("\nEnter the radius : ");
            scanf("%d",&r);
            printf("\nThe perimeter of Circle is = %f", 2*pie*r);
            printf("\nThe area of Circle = %f", pie*r*r);
            break;
        default:
            printf("\nInvalid Operator");
    }
    return 0;
}