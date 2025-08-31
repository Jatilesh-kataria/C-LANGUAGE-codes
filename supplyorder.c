#include <stdio.h>
int main()
{
    int credit,order,stock=55000,supply,remain;

    printf("If your credit score is ok press 1 else press 0 = ");
    scanf("%d",&credit);
    printf("Enter your order Quantity = ");
    scanf("%d",&order);

    supply = order - stock;
    remain = order - supply;

    if(credit==0)
        printf("Not Supply");
    else if(credit==1 && order<=stock)
        printf("Supply");
    else if(credit==1 && order>stock)
    {
        printf("Supply order = %d",supply);
        printf("\nBalance = %d will be shipped",remain);
    }
}