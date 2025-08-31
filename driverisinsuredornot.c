#include <stdio.h>
int main()
{
    int marr,gen,age;

    printf("IF YOU ARE MARRIED PRESS 1 ,BUT IF YOU ARE UNMARRIED PRESS 0 :");
    scanf("%d",&marr);
    printf("IF YOU ARE MALE THEN PRESS 1 ,BUT IF YOU ARE FEMALE PRESS 0 :");
    scanf("%d",&gen);
    printf("ENTER YOUR AGE :");
    scanf("%d",&age);

    if((marr==1 && gen==1) || (marr==1 && gen==0))
    {
        printf("DRIVER IS INSURED");
        if(marr==1 && gen==1)
        {
            printf("\nYOU ARE MARRIED");
            printf("\nYOUR GENDER IS MALE");
            printf("\nYOUR AGE IS %d",age);
        }
        else if(marr==1 && gen==0)
        {
            printf("\nYOU ARE MARRIED");
            printf("\nYOUR GENDER IS FEMALE");
            printf("\nYOUR AGE IS %d",age);
        }
    }
    else if((marr==0 && gen==1 && age>30) || (marr==0 && gen==0 && age>25))
    {
        printf("DRIVER IS INSURED");
        if(marr==0 && gen==1 && age>30)
        {
            printf("\nYOU ARE UNMARRIED");
            printf("\nYOUR GENDER IS MALE");
            printf("\nYOUR AGE IS %d",age);
        }
        else if(marr==0 && gen==0 && age>25)
        {
            printf("\nYOU ARE UNMARRIED");
            printf("\nYOUR GENDER IS FEMALE");
            printf("\nYOUR AGE IS %d",age);
        }
    }
    else
        printf("DRIVER IS NOT INSURED");
}