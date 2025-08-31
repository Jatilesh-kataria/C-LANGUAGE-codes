#include <stdio.h>
int main()
{
    int player1,player2,total=21;

    player1:
    printf("Player 1 ,Enter any number between 1 to 9 :");
    scanf("%d",&player1);
    if(player1>=1 && player1<=9)
    {
        total = total - player1;
        if(total<=0)
        {
            printf("player 1 Loose the game");
            return 0;
        }
    }
    else
    {
        printf("try again");
        goto player1;
    }
    player2:
    printf("Player 2 ,Enter any number between 1 to 9 :");
    scanf("%d",&player2);
    if(player2>=1 && player2<=9)
    {
        total = total - player2;
        if(total<=0)
        {
            printf("player 2 Loose the game");
            return 0;
        }
        else
        goto player1;
    }
    else
    {
        printf("try again");
        goto player2;
    }
}