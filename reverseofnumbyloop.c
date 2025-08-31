#include<stdio.h>
int main()
{
    int reverse,a=1,b;

    printf("Enter any 5 digit number:");
    scanf("%5d",&reverse);

    while(a<=5)
    {
        b=reverse%10;
        reverse=reverse/10;
        printf("%d",b);
        a=a+1;
    }
}