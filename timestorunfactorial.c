#include <stdio.h>
int main()
{
    int factorial,a=1,x;
    x=3;//times to run code.
while(x>=1)
{
        printf("\nEnter any number =");//input number.
    scanf("%d",&factorial);

    while(factorial>=1)
    {
        a=factorial*a;//output save value.
        factorial=factorial-1;//for inner loop.
    }
    printf("Your factorial value =%d",a);//output value.
    x=x-1;//for closing outer loop.
    a=1;//to reset the value.
}
}