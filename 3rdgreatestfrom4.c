#include <stdio.h>
int main()
{
    int a,b,c,d;

    printf("enter the value of a ,b ,c and d");
    scanf("%d%d%d%d",&a,&b,&c,&d);

    if((a<b && a<c && a>d) || (a<b && a>c && a<d) || (a>b && a<c && a<d))
        printf("a is third greater");
    else if((b<a && b<c && b>d) || (b<a && b>c && b<d) || (b>a && b<c && b<d))
        printf("b is third greater");
    else if((c<a && c<b && c>d) || (c<a && c>b && c<d) || (c>a && c<b && c<d))
        printf("c is third greatest");
    else
        printf("d is third greatest");
}