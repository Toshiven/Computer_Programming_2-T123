#include <stdio.h>

int array(int *a,int c){
    int sum = 0;
    for (int i = 0; i < c; i++)
    {
        sum += a[i];
    }
    return sum;
}

int main(){
    int a[10], c;
    printf("Enter the size of the Array: ");
    scanf("%d",&c);
    if(c >= 5 && c <= 10){
        for(int i = 1; i <= c; i++){
            printf("Enter Element %d: ",i);
            scanf("%d",&a[i-1]);
        }
    } else {
        printf("Array size must be 5-10!\n");
        return -1;
    }
    printf("Sum of all array Elements = %d", array(a,c));
    return 0;
}
