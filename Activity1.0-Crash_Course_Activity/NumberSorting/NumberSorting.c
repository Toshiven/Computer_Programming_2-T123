#include <stdio.h>
void Array(int arr[],int size){
    int i;
    printf("Sorted list: ");
    for(i = 0;i<size;i++){
        if(i==size-1){
            printf("%d",arr[i]);
        }
        else{
        printf("%d, ",arr[i]);
        }
    }
    printf("\n");
}
void swap(int* x,int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
void Sort(int *arr,int size){
    int i = 0;
    while (i<size-1)
    {
        if(arr[i] < arr[i+1]){
            swap(&arr[i],&arr[i+1]);
        }
        i++;
        Sort(arr,size-1);
    }
}
int main(){
    int num[10];
    for (int i = 1; i <= 10; i++)
    {
        int temp;
        printf("[%d] Input Number: ",i);
        scanf("%d",&temp);
        if(temp <= 0){
            printf("This is an invalid input. Try Again.\n");
            --i;
            continue;
        }
        num[i-1] = temp;
    }
    Sort(num,10);
    Array(num,10);
    return 0;
}