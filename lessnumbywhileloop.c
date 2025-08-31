#include <stdio.h>
int main()
{
    int i,num;

    printf("Enter the number = ");
    scanf("%d",&num);

    i = 1;
    while(num>=1)
    {
        i = num;

    printf("\n%d",num);
    num = i-1;
    }
}