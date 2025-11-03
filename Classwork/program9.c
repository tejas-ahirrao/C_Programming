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


#include<stdio.h>

float AdditionTwoNumbers(float fNo1,float fNo2)
{
    float fSum = 0.0f;
    //Updator
    if(fNo1 < 0.0f)
    {
        fNo1 = -fNo1;
    };

    if(fNo2 < 0.0f)
    {
        fNo2 = -fNo2;
    };

    fSum = fNo1+fNo2; //business logic
    return fSum;
}

int main()
{

    float fValue1=0.0f, fValue2=0.0f, fRet=0.0f;

    printf("enter first no:\n");
    scanf("%f",&fValue1);

    printf("enter sec no:\n");
    scanf("%f",&fValue2);

    fRet= AdditionTwoNumbers(fValue1,fValue2);

    printf("add is: %f\n",fRet);
    return 0;
}