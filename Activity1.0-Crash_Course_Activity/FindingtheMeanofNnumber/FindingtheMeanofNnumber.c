#include <stdio.h>
int main()
{
    int i = 1, a, x = 0, j = 0;
    float mean;
    while (1)
    {
        printf("[%d] Input Number: ", i);
        scanf("%d", &a);
        if (a < 0)
        {
            continue;
        }
        else if (a == 0)
        {
            break;
        }
        else
        {
            j++;
            x += a;
            i++;
        }
    }
    mean = x / j;
    printf("Average = %.2f.", mean);
    return 0;
}