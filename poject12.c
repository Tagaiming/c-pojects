#include <stdio.h>
// Quiz game

int main()
{
    int answer,score=0;
    printf("===================================\n");
    printf("     FOOTBALL QUIZ - 5 QUESTIONS\n");
    printf("===================================\n\n");

    //   1 quiz
    printf("a. Question: Which country has won the most FIFA World Cup titles?\n");
    printf("1.Germany\n  2.Brazil\n  3.Argentina\n   4.Italy\n");
    printf("Enter your anwer:");
    scanf("%d", &answer);
    if (answer == 2)
    {
        printf("Your answer is correct!\n");
        score++;
    }
    else
    {
        printf("Your answer is wrong!\n");
    }
    // 2 quiz

    printf("b.Who is the all-time top scorer in UEFA Champions League history (as of 2024)?\n");
    printf("1.Lionel Messi\n 2. Robert Lewandowski\n 3.Cristiano Ronaldo\n 4. Raul\n");
     printf("Enter your anwer:");
    scanf("%d", &answer);
    if (answer == 3)
    {
        printf("Your answer is correct!\n");
        score++;
    }
    else
    {
        printf("Your answer is wrong!\n");
    }

    printf("c. Which club has won the most English Premier League titles?\n");
    printf("1) Manchester United\n 2)Liverpool\n 3)Arsenal\n 4)Manchester City\n");
     printf("Enter your anwer:");
    scanf("%d", &answer);
    if (answer == 1)
    {
        printf("Your answer is correct!\n");
        score++;
    }
    else
    {
        printf("Your answer is wrong!\n");
    }

    printf("d.In which year was the first FIFA World Cup held?\n");
    printf("1)1928\n 2)1930\n 3)1934\n 4)1938\n");
     printf("Enter your anwer:");
    scanf("%d", &answer);
    if (answer == 2)
    {
        printf("Your answer is correct!\n");
        score++;
    }
    else
    {
        printf("Your answer is wrong!\n");
    }

    printf("e. Which player has won the most Ballon d'Or awards?\n");
    printf("1)Lionel Messi\n 2)Cristiano Ronaldo\n 3)Michel Platini\n 4)Johan Cruyff\n");
     printf("Enter your anwer:");

    scanf("%d", &answer);
    if (answer == 2)
    {
        printf(" if messi won 8 Ballondor in \n there one is neymar 1 halaand \n 1 vendike 1 inesta 1 ribary\n so Your answer is correct!\n");
        score++;
    }
    else
    {
        printf("Your answer is wrong!\n");
    }
    // Final score
    printf("===================================\n");
    printf("           QUIZ FINISHED!\n");
    printf("   Your final score: %d out of 5\n", score);

    return 0;
}
