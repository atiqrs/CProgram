#include<stdio.h>
#include<math.h>
main()
{
    int length,height;
    float thirdSide,area,perimeter;

    //input section
    printf("Enter length: ");
    scanf("%d",&length);
    printf("Enter height: ");
    scanf("%d",&height);

    //calculation section
    area = (length*height)/2;
    thirdSide = sqrt(pow(length,2)+ pow(height,2)); //(pow(length,2) == (length*length)
    perimeter = length + height + thirdSide;

    //output section
    printf("\nArea of the triangle is: %.2f\n",area);
    printf("Perimeter of the triangle is: %.2f\n",perimeter);
}

/*
    Functions introducing:

    pow() function use for power. [it's from math.h file]
    if i want to calculate "2 power 3" it's equals to "pow(2,3)" all are give the same answare 8;

    sqrt() function use for root.
    if i want to calculate "root 9" it's equals to "sqrt(9)" it gives the answare 3;
*/
