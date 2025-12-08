#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int player, robot;
    srand(time(NULL));
    player = (rand() % 6) + 1;
    robot = (rand() % 6) + 1;

    switch (player)
    {
    case 1:
        printf("player go 1 step  \n");
        break;
    case 2:
        printf("player go 2 step \n");
        break;

    case 3:
        printf("player go 3 step \n");
        break;
    case 4:
        printf("player go 4 step \n");
        break;
    case 5:
        printf("player go 5 step \n");
        break;
    case 6:
        printf("player go 6 step \n");
        break;
    }
    switch (robot)
    {
    case 1:
        printf("Robot go 1 step \n");
        break;
    case 2:
        printf("Robot go 2 step \n");
        break;

    case 3:
        printf("Robot go 3 step \n");
        break;
    case 4:
        printf("Robot go 4 step \n");
        break;
    case 5:
        printf("Robot go 5 step \n");
        break;
    case 6:
        printf("Robot go 6 step \n");
        break;
    }
    return 0;
}