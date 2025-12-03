#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // snak-->0
    // water-->1
    // gun-->2

    int player, computer;
    srand(time(NULL));
    computer = rand() % 3;
    printf("enter your number o for snake ,1 for water,2 for gun :");
    scanf("%d", &player);
    if (player == 0 && computer == 1)
    {
        printf("Player Win!\n");
    }

    else if (player == 0 && computer == 2)
    {
        printf("computer  Win!\n");
    }
    else if (player == 1 && computer == 0)
    {
        printf("computer Win!\n");
    }
    //  else if(player==1 && computer==1){

    // }
    else if (player == 1 && computer == 2)
    {
        printf("Player Win!");
    }
    else if (player == 2 && computer == 0)
    {
        printf("Player Win!");
    }
    else if (player == 2 && computer == 1)
    {
        printf("computer Win!");
    }

    else
    {
        printf("Game is darw\n");
    }
    // }
    //  else if(player==2 && computer==2){

    // }

    printf(" player chsoe:%d\n",player);
     printf(" computer chsoe:%d\n",computer);


    return 0;
}