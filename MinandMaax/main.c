#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10], b, min, max;

    for(b=0; b<10; b++){
        scanf("Input number: %d", &a[b]);
    }

    for(b=0; b<10; b++){
        if (min > a[b])
            min = a[b];

        if (max < a[b])
            max = a[b];

    }
    printf("Min: %d\n", min);
    printf("Max: %d\n", max);
    return 0;
}
