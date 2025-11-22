#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    srand(time(0));
    // random number genarate
    int random = rand() % 100 + 1;

    int guess;

    do
    {
        // take user input
        printf("Guess the number :\n");
        scanf("%d", &guess);
        if (guess != random)
        {
            if (guess > random)
            {
                printf("your number is not correct it is big\n");
            }
            if (guess < random)
            {
                printf("your number is not correct it is small\n");
            }
        }
        else
        {
            printf("your guess is correct\n");
        }

    } while (guess != random);

    return 0;
}