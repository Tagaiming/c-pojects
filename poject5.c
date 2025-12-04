// claculator....
#include <stdio.h>

int main()
{
    int num1, num2;
    char oparator;
    printf("Enter your 1st number: ");
    scanf("%d", &num1);
    printf("Enter your 2nd number: ");
    scanf("%d", &num2);
    printf("enter your oparator: ");
    scanf(" %c", &oparator);
    if (oparator == '+')
    {
        printf("The sum is: %d", num1 + num2);
    }
    else if (oparator == '_')
    {
        printf("The sub is: %d", num1 - num2);
    }
    else if (oparator == '*')
    {
        printf("The mul is: %d", num1 * num2);
    }
    else if (oparator == '/')
    {
        printf("The div is: %d", num1 / num2);
    }
    else
    {
        printf("somthink is wrong plz try again");
    }

    return 0;
}