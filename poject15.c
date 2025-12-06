#include <stdio.h>

int main()
{
    char *months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "Octobar", "November", "December"};
    int dayinmonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int totaldays, total_months;
    int i, daycount;
    total_months = 12;

    for (i = 0; i < total_months; i++)
    {
        printf("\n\n------------- %s -------------\n", months[i]);
        printf("\n Sat  SUN  MON  TUE  WED  THU  FRI \n");
        printf("-----------------------------------------\n");

        for (daycount = 1; daycount <= dayinmonth[i]; daycount++)
        {
            printf("%5d", daycount);
            if (daycount % 7 == 0)
            {
                printf("\n");
            }
        }
    }
    printf("\n");

    return 0;
}

