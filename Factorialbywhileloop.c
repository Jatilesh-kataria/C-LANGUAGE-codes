#include <stdio.h>
int main()
{
    int i,fact,num;
    printf("Enter the Number = ");
    scanf("%d",&num);


    i = 1;

    while(num>=1)
    {
        i = i*num;
        num = num-1;
    }
    printf("\nFactorial = %d",i);

}