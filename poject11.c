#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int arandom = rand() % 3;
    int brandom = rand() % 3;
    int crandom = rand() % 3;
    int drandom = rand() % 3;
    int erandom = rand() % 3;
    int frandom = rand() % 3;

    char frsit[5] = {'A', 'B', 'F', 'J', 'Z'};
    char second[5] = {'f', '2', 'h', '#', 'j'};
    char third[5] = {'k', 'l', 'm', 'n', 'o'};
    char fourth[5] = {'p', '0', 'r', '$', 't'};
    char fifth[5] = {'u', 'v', '&', 's', 'y'};
    char sixth[5] = {'8', 'q', '3', 'g', 'x'};

    printf("your random password is:%c%c%c%c%c%c", frsit[arandom], second[brandom], third[crandom], fourth[drandom], sixth[erandom], fifth[frandom]);

    return 0;
}