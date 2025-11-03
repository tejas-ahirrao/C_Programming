///////////////////////////////////////////////////////////////////
//
// required header file
//
///////////////////////////////////////////////////////////////////




#include<stdio.h>               //for input output
#include<stdbool.h>             //for bool datatype

///////////////////////////////////////////////////////////////////
//
//  function name : CheckEvenOdd
//  description :   it is used to check even odd
//  input :     
//  output :
//  aurhor :
//  date :
//
///////////////////////////////////////////////////////////////////

bool CheckEvenOdd(int iNo)
{
    return((iNo % 2)==0);
    
}
//////////////////////////////////////////////////////////////////
//
// entry point function for the application
//
//////////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("enter number:  ");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);

    if(bRet == true)
    {
        printf("%d is Even Number\n",iValue);
    }
    else
    {
        printf("%d is odd Number\n",iValue); 
    }
    
    return 0;
}