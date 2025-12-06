#include <stdio.h>
// Bmi calculator

int main(){
    double hight,wight,bmi;
    printf("Enter your wight in Kg: ");
    scanf("%lf",&wight);
    printf("Enter your hight in meter: ");
    scanf("%lf",&hight);
    bmi=wight/(hight*hight);
    printf("Your bmi is:%lf ",bmi);
    return 0;
}