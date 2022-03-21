#include <stdio.h>
#include <stdlib.h>
secondary(int a[5], int i, int ans, int o);
int main()
{
    int i;
    int a[5], res, ans, o;
    printf("Input Grades: \n");

    for (i = 0; i < 5; i++){
      scanf("%d", &a[i]);
    }

    res = secondary(a, i, ans, o);

    printf("Average: %d", res);
    return 0;
}
int secondary(int a[5], int i, int ans, int o)
{
    for(i = 0; i < 5; i++)
          o = o + a[i];
          ans = o / 5;
    return ans;
}
