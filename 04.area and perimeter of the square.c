#include<stdio.h>
main()
{
    int side,area,perimeter;
    //input section
    printf("Enter Side: ");
    scanf("%d",&side);

    //calculation section
    area = side*side;
    perimeter = 4*side;
    
    //output section
    printf("\nArea of the square is: %d\n",area);
    printf("Perimeter of the square is: %d\n",perimeter);
}