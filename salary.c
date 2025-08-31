#include <stdio.h>
int main()
{
    int gender,degree,yos;

    printf("if your gender is male then press 1 ,or if your gender is female then enter 0 =");
    scanf("%d",&gender);
    printf("if you are post graduate press 1 , else if you are post graduate press 0 =");
    scanf("%d",&degree);
    printf("ENTER YOUR YEAR OF SERVICE =");
    scanf("%d",&yos);

    if(gender==1 && degree==1 && yos>=10)
    {
        printf("YOUR SALARY IS 15000");
        printf("\nYOUR GENDER IS MALE");
        printf("\nYOUR DEGREE IS POST GRADUATE");
        printf("\nYOUR YEAR OF SERVICE IS %d",yos);
    }
    else if((gender==1 && degree==0 && yos>=10) || (gender==1 && degree==1 && yos<10) || (gender==0 && degree==1 && yos<10))
        {
            printf("YOUR SALARY IS 10000");
            if(gender==1 && degree==0 && yos>=10)
            {
                printf("\nYOUR GENDER IS MALE");
                printf("\nYOUR DEGREE IS GRADUATE");
                printf("\nYOUR YEAR OF SERVICE IS %d",yos);
            }
            else if(gender==1 && degree==1 && yos<10)
            {
                printf("\nYOUR GENDER IS MALE");
                printf("\nYOUR DEGREE IS POST GRADUATE");
                printf("\nYOUR YEAR OF SERVICE IS %d",yos);
            }
            else if(gender==0 && degree==1 && yos<10)
            {
                printf("\nYOUR GENDER IS FEMALE");
                printf("\nYOUR DEGREE IS POST GRADUATE");
                printf("\nYOUR YEAR OF SERVICE IS %d",yos);
            }
        }
    else if(gender==1 && degree==0 && yos<10)
    {
        printf("\nYOUR SALARY IS 7000");
        printf("\nYOUR GENDER IS MALE");
        printf("\nYOUR DEGREE IS GRADUATE");
        printf("\nYOUR YEAR OF SERVICE IS %d",yos);
    }
    else if(gender==0 && degree==1 && yos>=10)
    {
        printf("YOUR SALARY IS 12000");
        printf("\nYOUR GENDER IS FEMALE");
        printf("\nYOUR DEGREE IS POST GRADUATE");
        printf("\nYOUR YEAR OF SERVICE IS %d",yos);
    }
    else if(gender==0 && degree==0 && yos>=10)
    {
        printf("YOUR SALARY IS 9000");
        printf("\nYOUR GENDER IS FEMALE");
        printf("\nYOUR DEGREE IS GRADUATE");
        printf("\nYOUR YEAR OF SERVICE IS %d",yos);
    }
    else if(gender==0 && degree==0 && yos<10)
    {
        printf("YOUR SALARY IS 6000");
        printf("\nYOUR GENDER IS FEMALE");
        printf("\nYOUR DEGREE IS GRADUATE");
        printf("\nYOUR YEAR OF SERVICE IS %d",yos);
    }
}