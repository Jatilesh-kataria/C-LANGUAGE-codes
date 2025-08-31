#include<stdio.h>
int main()
{
    int num,a,b=1,x,d=0,y=1;
    printf("enter any number =");//1234
        scanf("%d",&num);
        y=num;
        x=num;//1234
    while(num>0)
    {
        a=num%10;//4
        num=num/10;//123
        while(x>0)
        {
        b=a*b;//4*1*4*4*4
        x=x/10;//123
        }
        x=y;
        d=b+d;//0+256
        b=1;
    }
    printf("%d",d);
}