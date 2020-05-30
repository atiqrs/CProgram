#include<stdio.h>
main()
{
    int radius;
    float area,circumference;
    //input section
    printf("Enter radius : ");
    scanf("%d",&radius );

    //calculation section
    area = 3.1416*radius*radius;
    circumference = 2*3.1416*radius;
    
    //output section
    printf("\nArea of the circle is: %.2f\n",area);
    printf("Circumference of the circle is: %.2f\n",circumference);
}