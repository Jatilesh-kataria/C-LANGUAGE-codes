#include<stdio.h>
int main()
{
    int i=1,b;

    printf("enter any num = ");
    scanf("%d",&b);

    while(b>=1)
    {
        printf("%d*",b);
        i=b*i;
        b=b-1;
    }
    printf("\nfactorial=%d",i);
}