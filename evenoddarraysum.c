#include<stdio.h>
int main()
{
    int i[100],evensum=0,oddsum=0,size,loop;

    printf("enter the size of array upto 100= ");
    scanf("%d",&size);
    printf("enter the values= ");

    for(loop=0;loop<=size-1;loop++)
    {
    scanf("%d",&i[loop]);
    if(i[loop]%2==0)
    evensum=evensum+i[loop];
    else
    oddsum=oddsum+i[loop];
    }
    printf("the sum of all even values are = %d",evensum);
    printf("\nthe sum of all odd values are = %d",oddsum);
}