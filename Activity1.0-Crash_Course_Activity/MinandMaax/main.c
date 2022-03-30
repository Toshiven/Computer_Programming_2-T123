#include <stdio.h>
#include <stdlib.h>

int  main( )
{
int  a[100], n, i, j;
int mean, sum;

printf("Enter the Numbers : \n") ;

for (i = 1; i <= 3; i++)
{
scanf("%d", &a[i]);
}

for (i = 1; i <= a[i]; i++)
{
sum = sum + a[i] ;
mean = sum / n ;
}

printf("\n Mean of entered Numbers are : %d ",mean) ;
return (0) ;
}
