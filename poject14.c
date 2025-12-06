#include <stdio.h>
// Contact Saver

int main()
{
    char num[20], name[50], adress[200];
    FILE *fptr;
    fptr = fopen("contract.txt", "a");
    printf("Enter your number: ");
    scanf("%s", &num);
    printf("Enter your name: ");
    scanf("%s", &name);
    printf("Enter your adress: ");
    scanf("%s", &adress);
    fprintf(fptr, "name:%s\nnum:%s\nadress:%s\n", &name, &num, &adress);
    fclose(fptr);

    return 0;
}