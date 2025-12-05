#include <stdio.h>
// To do List 

int main()
{
    char date[20], time[20],task[40];
    printf("Enter your current date:");
    scanf(" %s", &date);

    printf("Enter your current time:");
    scanf(" %s", &time);

    printf("Enter your current task:");
    scanf(" %s", &task);
    FILE *ptr;
    ptr = fopen("Task.txt", "a");
    fprintf(ptr, "date is:%s\n time is:%s\n task is :%s \n", date, time, task);
    fclose(ptr);

    return 0;
}