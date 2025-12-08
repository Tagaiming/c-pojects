//-------------------------------------------- currency convertor-----------------------------------------
#include <stdio.h>

int main()
{
    int Money;
    float taka, usd, rupi, a, b, c, d;
    printf("Enter 1 for taka to usd\n 2 for usd to taka \n 3 for rupi to usd\n 4 for usd to rupi ");
    scanf("%d", &Money);
    switch (Money)
    {
    case 1:
        printf("Enter taka:");
        scanf("%f", &taka);

        a = taka / 122;
        printf(" usd is:%f", a);
        break;
    case 2:
        printf("Enter usd:");

        scanf("%f", &usd);
        b = usd * 122;
        printf(" taka is:%f", b);
        break;
    case 3:
        printf("Enter Rupi:");
        scanf("%f", &rupi);

        c = taka / 90;
        printf(" usd is:%f", c);
        break;
    case 4:
        printf("Enter usd:");

        scanf("%f", &usd);
        d = usd * 90;
        printf(" taka is:%f", d);
        break;
    }
    return 0;
}