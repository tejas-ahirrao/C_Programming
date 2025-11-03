/*
    START
        Accept number and store as no
        divide no by 2
        if the remaindet is 0
            then display even
        otherwise
            display odd
    STOP
*/
#include<stdio.h>

void CheckEvenOdd(int iNo)
{
    int iRem = 0;

    iRem = iNo % 2;

    if(iRem == 0)
    {
        printf("it is even number");
    }
    else
    {
        printf("it is odd number");
    }
}

int main()
{
    int iValue = 0;

    printf("enter number:  ");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);

    
    return 0;
}