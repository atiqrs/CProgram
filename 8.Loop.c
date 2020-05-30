#include<stdio.h>
main()
{
    int i;
    
    //for loop
    for(i=1; i<=10; i++ )
    {
        printf("%d",i);
        if(i<10)
        {
            printf(" + ");
        }
    }
    //printed 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10 statement
}