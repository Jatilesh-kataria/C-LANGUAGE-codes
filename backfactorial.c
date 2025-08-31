#include<stdio.h>
int main()
{
    int i=1,b,x=1;

    printf("enter any num = ");
    scanf("%d",&b);

    i=1;
    while(i<=b)
    {
        printf("%d * ",i);
        i=i+1;
        x=x*i;
    }
    printf("\nfactorial = %d",x);

}