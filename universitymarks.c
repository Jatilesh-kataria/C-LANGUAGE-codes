#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter your marks of subject A = ");
    scanf("%d",&a);
   
    printf("Enter your marks of subject B = ");
    scanf("%d",&b);

    if((a>=55 && b>=45) || (a>=45 && b>=45))
       if(a>55 && b>=55)
        printf("pass");
        else
        printf("pass");
    else if(a>=65 && b<45)
    printf("Reappear in exam B to Qualify");
    else
    printf("Fail");
}