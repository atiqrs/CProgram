#include<stdio.h>
main()
{
    int length,width,area,perimeter;
    //input section
    printf("Enter length: ");
    scanf("%d",&length);
    printf("Enter width: ");
    scanf("%d",&width);
    //calculation section
    area = length*width;
    perimeter = (length*2)+(width*2);
    //output section
    printf("\nArea of the rectangle is: %d\n",area);
    printf("Perimeter of the rectangle is: %d\n",perimeter);
}