#include<stdio.h>
int AdditionTwoNumbers(int iNo1,int iNo2)
{
    int iSum = 0;
    iSum = iNo1+iNo2; //business logic
    return iSum;
}


int main()
{

    int iValue1=0, iValue2=0, iRet=0;

    printf("enter first no:\n");
    scanf("%d",&iValue1);

    printf("enter sec no:\n");
    scanf("%d",&iValue2);

    iRet= AdditionTwoNumbers(iValue1,iValue2);

    printf("add is: %d\n",iRet);
    return 0;
}