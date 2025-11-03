/*
     step1: understand problem statement
     step2: write the algoriyhm
     step3: decidee the programming language
     step4: weite the program
     step5: teat the program
*/

/*algorithm:

    START
        Accept first number as No1.
        Accept second number as No2.
        if the input is negative then convert it into positive.
        Perform addition of No1 and No2.
        Display the addition on screen.
    STOP

*/

////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////////////////////
//
//  Function name : AdditionTwoNumbers
//  Description :   It is used to perform addition
//  Input :         Float, Float
//  Output :        Float
//  Author :        Tejas Sunil Ahirrao
//  Date :          09/10/25
//
/////////////////////////////////////////////////////////////////

float AdditionTwoNumbers(
                            float fNo1,         // first input
                            float fNo2          // to store the result
                        )
{
    float fSum = 0.0f;
                                                //Updator
    if(fNo1 < 0.0f)
    {
        fNo1 = -fNo1;
    };
                                                //updator
    if(fNo2 < 0.0f)
    {
        fNo2 = -fNo2;                          
    };

    fSum = fNo1+fNo2;                           //business logic
    return fSum;
}   //end of AdditionTwoNumbers

/////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
/////////////////////////////////////////////////////////////////

int main()
{

    float fValue1=0.0f, fValue2=0.0f;               //to accept input 
    float fRet=0.0f;                                //to store result

    printf("enter first no:\n");
    scanf("%f",&fValue1);

    printf("enter sec no:\n");
    scanf("%f",&fValue2);

    fRet= AdditionTwoNumbers(fValue1,fValue2);

    printf("add is: %f\n",fRet);
    return 0;
}   //end of main

/////////////////////////////////////////////////////////////////
//
//  Test cases successfully handeled by the application
//
//  Input : 10.5    Input : 3.2     Output : 13.7
//  Input : -10.5    Input : 3.2     Output : 13.7
//  Input : 10.5    Input : -3.2     Output : 13.7
//  Input : -10.5    Input : -3.2     Output : 13.7
//  Input : 10.5    Input : 0.0     Output : 10.5
//
//
/////////////////////////////////////////////////////////////////