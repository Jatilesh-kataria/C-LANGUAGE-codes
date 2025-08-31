#include<stdio.h>
int main()
{
    int multiply,number=1,x;
    printf("enter any number = ");
    scanf("%d",&multiply);

    while(number<=10)
    {
        x=multiply*number;
        printf("\n%d X %d = %d",multiply,number,x);
        number=number+1;
    }
}