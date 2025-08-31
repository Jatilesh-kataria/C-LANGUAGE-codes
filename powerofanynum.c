#include<stdio.h>
int main()
{
    int power,i,num,no;
    printf("Enter the no = ");
    scanf("%d",&no);
    printf("Enter the power = ");
    scanf("%d",&power);
    i=1;
    num=1;
    while(i<=power)
    {
        printf("\n%d",i);
        i=i+1;
        num=num*no;
    }
    printf("\nans = %d",num);
}