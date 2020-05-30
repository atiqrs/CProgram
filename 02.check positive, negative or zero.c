#include<stdio.h>
main()
{
    int num;
    printf("Enter your number: ");
    scanf("%d",&num);
    if(num > 0)
        printf("%d is Positive",num);
    else if(num < 0)
        printf("%d is Negetive",num);
    else if(num == 0)
        printf("%d is Zero",num);
}