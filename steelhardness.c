#include <stdio.h>
int main()
{
    int hardness,tensile;
    float carbon;
    printf("enter the value of hardness =");
    scanf("%d",&hardness);
    printf("enter the value of carbon =");
    scanf("%f",&carbon);
    printf("enter the value of Tensile =");
    scanf("%d",&tensile);

    if(hardness>50 && carbon<0.7 && tensile>5600)
    printf("Grade 10");
    else if(hardness>50 && carbon<0.7 && tensile<=5600)
    printf("Grade 9");
    else if(hardness<=50 && carbon<0.7 && tensile>5600)
    printf("Grade 8");
    else if(hardness>50 && carbon>=0.7 && tensile>5600)
    printf("Grade 7");
    else if(hardness>50 || carbon<0.7 || tensile>5600)
    printf("Grade 6");
    else
    printf("Grade 5");
}