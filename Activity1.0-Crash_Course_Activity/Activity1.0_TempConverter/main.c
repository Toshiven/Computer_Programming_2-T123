#include <stdio.h>
#include <stdlib.h>
secondary(char,char,float,float);

int main()
{
    char option;
    char optionT;
    float num, ans;

    printf("Input original temperature value: ");
    scanf("%f", &num);
    printf("Value: %f\n", num);

    float res = secondary(option, optionT, ans, num);
    printf("%f", res);

    return 0;
}

int secondary(char option, char optionT, float ans, float num){

    printf("\nSelect original temperature scale:\n[c] for Celsius\n[f] for Fahrenheit\n[k] for Kelvin\n");
    scanf("%s%*c", &option);

    switch(option){
    case 'c':
        printf("\nSelect converted temperature scale:\n[f] for Fahrenheit\n[k] for Kelvin\n");
        scanf("%s%*c", &optionT);
        switch(optionT){
        case 'f':
            printf("\nCelsius to Fahrenheit\n");
            ans = (num * 9.0/5.0)+ 32.0;
            break;
        case 'k':
            printf("\nCelsius to Kelvin\n");
            ans = (num + 273.15);
            break;
        }
        break;
    case 'f':
        printf("\nSelect converted temperature scale:\n[c] for Celsius\n[k] for Kelvin\n");
        scanf("%s%*c", &optionT);
        switch(optionT){
        case 'c':
            printf("\nFahrenheit to Celsius\n");
            ans = (num - 32)* 5 / 9;
            break;
        case 'k':
            printf("\nFahrenheit to Kelvin\n");
            ans = (num - 32)* 5 / 9 + 273.15;
            break;
        }
        break;
    case 'k':
        printf("\nSelect converted temperature scale:\n[c] for Celsius\n[f] for Fahrenheit\n");
        scanf("%s%*c", &optionT);
        switch(optionT){
        case 'c':
            printf("\nKelvin to Celsius\n");
            ans = (num - 273.15);
            break;
        case 'f':
            printf("\nKelvin to Fahrenheit\n");
            ans = (num - 273.15)* 5 / 9 + 32;
            break;
        }
        break;
    }
    return ans;
}
