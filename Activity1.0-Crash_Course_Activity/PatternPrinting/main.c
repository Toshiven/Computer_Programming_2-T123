#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, s, num;
    printf("Enter integer: ");
    scanf("%d", &num);

    printf("\n");
    for (i=0; i<=num; i++){
        for(s=0; s<=(num-i); s++)
            {
            printf(" ");
            }

        for (j=0; j<=(1*i-1); j++)
            {
            printf("*");
            printf(" ");

            }
        printf("\n");
        }

    return 0;
}
