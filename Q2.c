#include<stdio.h>

int main()
{
    float fahrenheit,celsius;

    printf("Enter the temperature :");
    scanf("%f",&celsius);

    fahrenheit=(celsius* 9/5)+32;

    printf("Celsius into fahrenheit :%2.f",fahrenheit);

    return 0;


}
