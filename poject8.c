
// User login From
#include <stdio.h>

int main()
{
    int user_id;
    int pass, chose;
    printf("Enter user type 1 for admin 2 for user");
    scanf("%d", &chose);
    if (chose == 1)
    {
        printf("enter your user_id:");
        scanf("%d", &user_id);
        printf("enter your password:");
        scanf("%d", &pass);
        if (user_id == 123 && pass == 102030)
        {
            printf("login succesfull");
        }
        else
        {
            printf("somthink is wrong");
        }
    }
    else if (chose == 2)
    {
        printf("enter your user_id:");
        scanf("%d", &user_id);
        printf("enter your password:");
        scanf("%d", &pass);
        if (user_id == 456 && pass == 405060)
        {
            printf("login succesfull");
        }
        else
        {
            printf("somthink is wrong");
        }
    }

    return 0;
}