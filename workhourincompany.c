#include <stdio.h>
int main()
{
    float time;
    printf("Enter your workhour = ");
    scanf("%f",&time);

    if(time>2 && time<3)
    printf("Highly efficient");
    else if(time>=3 && time<4)
    printf("Improve speed");
    else if(time>=4 && time<5)
    printf("Need training to improve speed");
    else if(time>=5)
    printf("Has to leave the company");
    return 0;
}