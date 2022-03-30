#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Enter grade: ");
    scanf("%d", &a);

    if (a <= 0 || a >= 101){
        printf("Invalid input. Try again.");
    }
    else if (a <= 49){
        printf("Your letter grade is F.");
    }
    else if (a >= 50 && a <= 59){
        printf("Your letter grade is D.");
    }
    else if (a >= 60 && a <= 68){
        printf("Your letter grade is C.");
    }
    else if (a >= 68 && a <= 75){
        printf("Your letter grade is B-.");
    }
    else if (a >= 76 && a <= 83){
        printf("Your letter grade is B.");
    }
    else if (a >= 84 && a <= 91){
        printf("Your letter grade is A-.");
    }
    else if (a >= 92 && a <= 100){
        printf("Your letter grade is A.");
    }
    else{
        printf("Try again");
    }
    return 0;
}
