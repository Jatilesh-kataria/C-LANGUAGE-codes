#include<stdio.h>
int main()
{
    int positive=0,negative=0,zero=0,i[1000],size,loop;

    printf("how much values you want to enter upto 1000 = ");
    scanf("%d",&size);

    printf("Enter the values positive , negative ,zero = ");
    for(loop=0;loop<=size-1;loop++)
    {
        scanf("%d",&i[loop]);
        if(i[loop]>0)
            positive=positive+1;
        else if(i[loop]<0)
        negative=negative+1;
        else
        zero=zero+1;
    }
    printf("\nTotal positive values are %d",positive);
    printf("\nTotal negative values are %d",negative);
    printf("\nTotal zero's values are %d",zero);
}