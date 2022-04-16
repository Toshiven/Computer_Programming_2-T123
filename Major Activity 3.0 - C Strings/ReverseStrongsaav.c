#include <stdio.h>
#include <string.h>

int main(){
    char wrd[100];
    int k;
    printf("Enter any string: ");
    gets(wrd);
    k = strlen(wrd);
    for(int i = k; i >= 0; i--){
        if(wrd[i] == ' ')
		{
			wrd[i] = '\0';
			printf("%s ", &(wrd[i]) + 1);	
		} 
    }
    printf("%s", wrd);
    return 0;
}