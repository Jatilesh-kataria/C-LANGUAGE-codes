#include <stdio.h>
int main()
{
    int sum,num1,num2,num3,num4,num5,x;

    printf("enter the 4 digit number = ");
    scanf("%4d",&num1);

    x = num1;//1234
    num2 = num1%10;//4
    num2 = num2*1000;//4000

    num1 = num1/10;//123
    num3 = num1%10;//3
    num3 = num3*100;//300

    num1 = num1/10;//12
    num4 = num1%10;//2
    num4 = num4*10;//20

    num5 = num1/10;//1

    sum = num2+num3+num4+num5;
    printf("reverse of number is = %d\n",sum);

    if(sum==x)
    printf("palindrome");
    else
    printf("Not palindrome");
    return 0;
}