#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <windows.h>
// --------------------------------Digital clock -------------------------------------------------------

int main()
{
    time_t rawtime = 0;
    struct tm *Ptime = NULL;
    bool isruuning = true;
   
    
    printf("Digila clock:\n");

    while (isruuning)
    {
        time(&rawtime);
        Ptime = localtime(&rawtime);
        int current_hour = Ptime->tm_hour;
        int current_minute = Ptime->tm_min;
        int current_sec = Ptime->tm_sec;

        printf("\r%02d:%02d:%02d", current_hour, current_minute, current_sec);
       
        
        Sleep(1000);
    }

    return 0;
}