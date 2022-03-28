#include <stdio.h>
int secondary(int acc[3][2], int a, int b){
    int c;
    for (int i=0; i<3; i++){
           if (a == acc[i][0] && b == acc[i][1]){
               c = 1;
           }
    }
    return c;

}

int main(){
    int a, b;
    int acc[3][2] = {{11, 12},{13, 14},{15, 16}};

    printf("Enter ID Number: ");
    scanf("%d", &a);
    printf("Enter PIN Number: ");
    scanf("%d", &b);

    if (secondary(acc, a, b)){
        printf("You have successfully logged in\nID#: %d", a);
    }
    else{
        printf("INVALID ID/PIN");
    }
    

    

    return 0;
}