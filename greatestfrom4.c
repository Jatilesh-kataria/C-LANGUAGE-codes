#include <stdio.h>
int main()
{
    int a,b,c,d;
    printf("enter the value of a,b,c and d");
    scanf("%d%d%d%d",&a,&b,&c,&d);

    if(a>b && a>c && a>d )
    printf("A IS GREATER");
    else if(b>c && b>d)
    printf("B IS GREATER");
    else if(c>d)
    printf("C IS GREATER");
    else
    printf("D IS GREATER");

}