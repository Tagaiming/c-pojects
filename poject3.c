
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int random;
    int user_score;
    int computer_score;
    do
    {
    
    // int random;
    // int user_score;
    // int computer_score;
    srand(time(0));
    random = rand() % 3;
    int user = scanf("%d", &user);
    if (user == 1)
    {
        printf("user select Rock\n");

        
    }
    else if (user == 2)
    {
        printf("user select paper\n");
    }

    else
    {
        printf(" user select scissors\n");
    }
    if (random == 1)
    {
        printf("computer select Rock\n");
    }
    else if (random == 2)
    {
        printf("computer select paper\n");
    }

    else
    {
        printf("computer select scissors\n");
    }

    if (random == 1 && user == 2)
    {
        printf("user win\n");
        user_score=1;
    }
    else if (random == 2 && user == 3)
    {
        printf("computer win\n");
        computer_score=1;
    }
    else if (random == 1 && user == 2)
    {
        printf("user win\n");
        user_score=1;
    }
    else if (random == 2 && user == 3)
    {
        printf("computer win\n");
        computer_score=1;
    }
    else if (random == 3 && user == 1)
    {
        printf("computer win win\n");
        computer_score=1;
    }
    else if (random == 1 && user == 3)
    {
        printf("User win\n ");
        user_score=1;
    }

    else
    {
        printf("user Win\n");
        user_score=0;
        computer_score=0;
    }
} while (computer_score<4&&user_score<4);
    return 0;
}