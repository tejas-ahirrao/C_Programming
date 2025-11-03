#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : DisplayDigit
//  Description :   To Display digits of number in revers order
//  Input :         int
//  Output :        void
//  Author :        Tejas Sunil Ahirrao
//  Date :          27/10/2025
//
//////////////////////////////////////////////////////////////

void DisplayDigit(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo/10;
        printf("%d\n",iDigit);
    }
}

/*
        Time Complexity : O(N)
*/

//////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
//////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    DisplayDigit(iValue);
  
    return 0;
}

