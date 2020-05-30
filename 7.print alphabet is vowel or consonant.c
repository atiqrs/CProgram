#include<stdio.h>
main()
{
    char alph;

    //input section
    printf("Enter alphabet : ");
    scanf("%c",&alph );

    //switch statement section
    switch(alph) 
    {
        case 'a':
        printf("\'%c\' is Vowel.",alph);
        break;
        
        case 'e':
        printf("\'%c\' is Vowel.",alph);
        break;

        case 'i':
        printf("\'%c\' is Vowel.",alph);
        break;

        case 'o':
        printf("\'%c\' is Vowel.",alph);
        break;

        case 'u':
        printf("\'%c\' is Vowel.",alph);
        break;

        default:
        printf("\'%c\' is Consonant.",alph);
    }

}