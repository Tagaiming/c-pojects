// Temp Converter
#include <stdio.h>

int main()
{
    double temp, result;
    char select;
    printf("Enter what you want if you want celsius to F the write F if you want to f to celcius then write C  ");
    scanf("%c", &select);
    if (select == 'c')
    {
        // Celsius to Fahrenheit
        printf("Enter you celcius  tempature:");
        scanf(" %lf", &temp);

        result = (temp * 9.0 / 5.0) + 32;
        printf("the ansewer is c to f: %lf", result);
    }
    else if (select == 'F')
    {
        // Fahrenheit Celsius to
        printf("Enter you Fahrenheit temp:");
        scanf(" %lf", &temp);

        result = (temp - 32) * 5.0 / 9.0;
        printf("the ansewer is f to c : %lf", result);
    }
    return 0;
}