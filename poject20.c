#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <windows.h>
// ------------------------Digital Alram clock ------------------------------------------------------

int main()
{
    time_t rawtime = 0;
    struct tm *Ptime = NULL;
    bool isruuning = true;
    bool alrambeep = false;
    int alarm_hour, alram_minute;

    printf("Enter your alrem time HH:MM :");
    scanf("%d %d", &alarm_hour, &alram_minute);

    printf("Digila clock:\n");

    while (isruuning)
    {
        time(&rawtime);
        Ptime = localtime(&rawtime);
        int current_hour = Ptime->tm_hour;
        int current_minute = Ptime->tm_min;
        int current_sec = Ptime->tm_sec;

        printf("\r %02d:%02d:%02d", current_hour, current_minute, current_sec);
        fflush(stdout);
        if ( !alrambeep &&current_hour == alarm_hour && current_minute == alram_minute)
        {
            printf("\n you alrem ringing!\n");
            Beep(220, 300);
            Beep(420, 600);
            Beep(220, 300);
            Beep(420, 600);
            Beep(220, 300);
            Beep(420, 600);
            Beep(220, 300);
            Beep(420, 600);
            Beep(220, 300);
            Beep(420, 600);
            Beep(220, 300);
            Beep(420, 600);
            alrambeep = true;
        }
        Sleep(1000);
    }

    return 0;
}