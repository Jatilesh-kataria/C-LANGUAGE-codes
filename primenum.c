#include<stdio.h>
int main()
{
    int num,prime,x=1,y=0;

    printf("Enter any num =");
    scanf("%d",&prime);//3

    while(x<=prime)
    {
        num=prime%x;
        x=x+1;
        if(num==0)
        y=y+1;
    }
    if(y==2)
    printf("Prime No");
    else
    printf("Not prime No");

    return 0;
}