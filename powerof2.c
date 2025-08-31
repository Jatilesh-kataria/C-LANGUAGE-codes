#include<stdio.h>
int main()
{
    int power,i,num;
    printf("Enter the power = ");
    scanf("%d",&power);
    i=1;
    num=1;
    while(i<=power)
    {
        printf("\n%d",i);
        i=i+1;
        num=num*2;
    }
    printf("\nans = %d",num);
}