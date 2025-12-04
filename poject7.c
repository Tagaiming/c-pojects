#include <stdio.h>

int main()
{
    int num;
    printf("Enter your number 1 to 100 :");
    scanf("%d", &num);
    if (num >= 80 && num <= 100)
    {
        printf("your grade is A+");
    }
    else if (num >= 70 && num <= 79)
    {
        printf("your grade is A");
    }
    else if (num >= 60 && num <= 69)
    {
        printf("your grade is A-");
    }
    else if (num >= 50 && num <= 59)
    {
        printf("your grade is B");
    }
    else if (num >= 40 && num <= 49)
    {
        printf("your grade is C");
    }
    else if (num >= 33 && num <= 59)
    {
        printf("your grade is D");
    }
    else if (num >= 0 && num <= 32)
    {
        printf("you fail in exam");
    }
    else
    {
        printf("Somthink is wrong");
    }

    return 0;
}